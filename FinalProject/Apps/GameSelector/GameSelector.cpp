//
// Created by Sherman Yan on 12/10/22.
//

#include "GameSelector.h"
void GameSelector::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if (!detailedPreview.checkStates(HIDDEN))
        target.draw(detailedPreview,states);

    if (!play.checkStates(HIDDEN))
        target.draw(play,states);

    target.draw(container,states);

}

void GameSelector::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

    if (event.type == sf::Event::MouseWheelScrolled )
        container.scroll(event.mouseWheelScroll.delta * 5,
                         {margins,0, static_cast<float>(window.getSize().x)-margins,static_cast<float>(window.getSize().y)});
    play.hover(window);

    for (int i = 1; i < APP_LAST_APP; ++i) {
        previews.at(AppsEnum(i)).hover(window);

        if (MouseEvents::isClick(previews.at(AppsEnum(i)),window)) {
            detailedPreview.update(AppsEnum(i));
            detailedPreview.setState(HIDDEN,false);
            play.setState(HIDDEN, false);
        }

    }

    if(!play.checkStates(HIDDEN) && MouseEvents::isClick(play,window)) {
        AppDriver::openApp(detailedPreview.getCurApp(), window);
        resetView(window);
    }

    if (sf::Event::Resized == event.type) {
        container.setPosition(container.getPosition().x,window.getSize().y - container.getGlobalBounds().height - margins);
        setPlayButtonPos();
    }

}

void GameSelector::update(const sf::RenderWindow &window) {
    container.update();
    detailedPreview.setBackgroundWidth(window.getSize().x);
}

GameSelector::GameSelector() {


    for (int i = 1; i < APP_LAST_APP; ++i) {
        previews.emplace(AppsEnum(i),AppsEnum(i));
        previews.at(AppsEnum(i)).setSize({700 , 394});
        container.addComponent(&previews.at(AppsEnum(i)));
    }
    sf::FloatRect cSize = container.getGlobalBounds();
    container.setPosition(50,windowSize.y - cSize.height - margins);

    detailedPreview.setPosition(100,100);
    detailedPreview.setState(HIDDEN,true);

    play.setState(HIDDEN,true);

    setPlayButtonPos();

}

void GameSelector::resetView(sf::RenderWindow& window) {
    window.setSize(windowSize);
    sf::FloatRect v(0, 0, window.getSize().x, window.getSize().y);
    window.setView(sf::View(v));
}

void GameSelector::setPlayButtonPos() {

    play.setPosition({100, 0});
    Position::top(play,container,80);

}



//
// Created by Sherman Yan on 12/10/22.
//

#include "GameSelector.h"
void GameSelector::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if (!detailedPreview.checkStates(HIDDEN))
        target.draw(detailedPreview,states);

    target.draw(skirt);

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
    skirt.setPosition(0,window.getSize().y - skirt.getGlobalBounds().height);
    skirt.setSize((sf::Vector2f)window.getSize());

}

GameSelector::GameSelector() {

    for (int i = 1; i < APP_LAST_APP; ++i) {
        previews.emplace(AppsEnum(i),AppsEnum(i));
        previews.at(AppsEnum(i)).setSize({700 , 394});
        container.addComponent(&previews.at(AppsEnum(i)));
    }
    sf::FloatRect cSize = container.getGlobalBounds();
    container.setPosition(margins,windowSize.y - cSize.height - margins);
    container.setItemSpacing(margins);

    detailedPreview.setPosition(80,80);
    detailedPreview.setState(HIDDEN,false);
    detailedPreview.update(APP_GREEN_BALL);

    play.setState(HIDDEN, false);
    setPlayButtonPos();

    skirt.setTexture(Textures::getTexture(SKIRT));
    skirt.setColor({25,25,25});
}

void GameSelector::resetView(sf::RenderWindow& window) {
    window.setSize(windowSize);
    sf::FloatRect v(0, 0, window.getSize().x, window.getSize().y);
    window.setView(sf::View(v));
}

void GameSelector::setPlayButtonPos() {
    play.setPosition({80, 0});
    Position::top(play,container,80);
}



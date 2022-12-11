//
// Created by Sherman Yan on 12/10/22.
//

#include "GameSelector.h"
void GameSelector::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(container,states);
}

void GameSelector::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

    if (event.type == sf::Event::MouseWheelScrolled )
        container.scroll(event.mouseWheelScroll.delta * 5,
                         {margins,0, static_cast<float>(window.getSize().x)-margins,static_cast<float>(window.getSize().y)});

    for (int i = 1; i < APP_LAST_APP; ++i) {
        previews.at(AppsEnum(i)).hover(window);

        if (MouseEvents::isClick(previews.at(AppsEnum(i)),window)) {
            AppDriver::openApp(AppsEnum(i), window);
            resetView(window);
        }
    }

    if (sf::Event::Resized == event.type) {
        container.setPosition(container.getPosition().x,window.getSize().y - container.getGlobalBounds().height - margins);
    }

}

void GameSelector::update(const sf::RenderWindow &window) {

    container.update();
}

GameSelector::GameSelector() {


    for (int i = 1; i < APP_LAST_APP; ++i) {
        previews.emplace(AppsEnum(i),AppsEnum(i));
        previews.at(AppsEnum(i)).setSize({700 , 394});
        container.addComponent(&previews.at(AppsEnum(i)));
    }
    sf::FloatRect cSize = container.getGlobalBounds();
    container.setPosition(50,windowSize.y - cSize.height - margins);

}

void GameSelector::resetView(sf::RenderWindow& window) {
    window.setSize(windowSize);
    sf::FloatRect v(0, 0, window.getSize().x, window.getSize().y);
    window.setView(sf::View(v));
}


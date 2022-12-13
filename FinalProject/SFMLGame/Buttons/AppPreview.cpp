//
// Created by Sherman Yan on 12/10/22.
//

#include "AppPreview.h"

AppPreview::AppPreview(AppsEnum app){
    img.setTexture(AppDetail::getTexture(app));
    border.setFillColor(sf::Color::Transparent);

    appName.setFont(Fonts::getFont(LILITA_ONE));
    appName.setString(AppDetail::getAppName(app));
    appName.setFillColor(sf::Color::White);

}

void AppPreview::hover(const sf::RenderWindow& window) {

    if (MouseEvents::isHover(*this, window)){
        selected = true;
        img.setColor(sf::Color(88,88,88));
        border.setOutlineThickness(10);
        border.setOutlineColor(sf::Color(255,255,255));

    }
    else {
        img.setColor(sf::Color::White);
        selected = false;
    }
}

void AppPreview::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    states.transform *= getTransform();
    target.draw(img,states);
    if(selected) {
        target.draw(appName,states);
        target.draw(border,states);
    }
}

void AppPreview::setPosition(float x, float y) {
    setPosition({x,y});
}

void AppPreview::setPosition(const sf::Vector2f &pos) {
    Transformable::setPosition(pos);
}

sf::FloatRect AppPreview::getGlobalBounds() const {
    return getTransform().transformRect(img.getGlobalBounds());
}

void AppPreview::setSize(float x, float y) {
    setSize({x,y});
}

void AppPreview::setSize(const sf::Vector2f &size) {
    img.setSize(size);
    border.setSize(size);
    appName.setCharacterSize(border.getSize().x /10);
    Position::center(appName,border);
    appName.setPosition(appName.getPosition().x,appName.getPosition().y - 10);

}

void AppPreview::setOutlineColor(const sf::Color &color) {

    border.setOutlineColor(color);
}

void AppPreview::setAppNameColor(const sf::Color &color) {

    appName.setFillColor(color);

}
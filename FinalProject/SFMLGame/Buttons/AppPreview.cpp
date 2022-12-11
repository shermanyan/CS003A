//
// Created by Sherman Yan on 12/10/22.
//

#include "AppPreview.h"

AppPreview::AppPreview(AppsEnum app){
    img.setTexture(getTexture(app));

    border.setFillColor(sf::Color::Transparent);
    border.setOutlineColor(sf::Color::White);
    border.setOutlineThickness(10);

    appName.setFont(Fonts::getFont(SONO_BOLD));
    appName.setString(getName(app));
    appName.setFillColor(sf::Color::White);

}

sf::Texture& AppPreview::getTexture(AppsEnum app) {

    switch (app) {
        case APP_GREEN_BALL:
            return (Textures::getTexture(GP_GREEN_BALL));
        case APP_BOUNCING_BALL:
            return (Textures::getTexture(GP_BOUNCING_BALL));
        case APP_PONG:
            return (Textures::getTexture(GP_PONG));
        case APP_PLAYING_CARD:
            return (Textures::getTexture(GP_PLAYING_CARD));
        case APP_POKER_ANALYSIS:
            return (Textures::getTexture(GP_POKER_ANALYSIS));
        case APP_OCEAN_CLEANUP:
            return (Textures::getTexture(GP_OCEAN_CLEANUP));
        case APP_TOP_HAT_GUY:
            return (Textures::getTexture(GP_TOP_HAT_GUY));
        case APP_LAST_APP:
            break;
    }
}

void AppPreview::hover(const sf::RenderWindow& window) {

    if (MouseEvents::isHover(*this, window)){
        selected = true;
        img.setColor(sf::Color(88,88,88));
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
        target.draw(border,states);
        target.draw(appName,states);
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

std::string AppPreview::getName(AppsEnum app) {

    switch (app) {
        case APP_GREEN_BALL:
            return " Green Ball";
        case APP_BOUNCING_BALL:
            return " Bouncing Ball";
        case APP_PONG:
            return " Pong";
        case APP_PLAYING_CARD:
            return " Playing Card";
        case APP_POKER_ANALYSIS:
            return " Poker Analysis";
        case APP_OCEAN_CLEANUP:
            return " Ocean Cleanup";
        case APP_TOP_HAT_GUY:
            return " Top Hat Guy";
    }
    return " ";
}

void AppPreview::setSize(float x, float y) {
    setSize({x,y});
}

void AppPreview::setSize(const sf::Vector2f &size) {
    img.setSize(size);
    border.setSize(size);
    appName.setCharacterSize(border.getSize().x /12);
}

void AppPreview::setOutlineColor(const sf::Color &color) {

    border.setOutlineColor(color);
}

void AppPreview::setAppNameColor(const sf::Color &color) {

    appName.setFillColor(color);

}
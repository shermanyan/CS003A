//
// Created by Sherman Yan on 12/10/22.
//

#ifndef FINALPROJECT_APPPREVIEW_H
#define FINALPROJECT_APPPREVIEW_H
#include <SFML/Graphics.hpp>
#include "SpriteImage.h"
#include "AppsEnum.h"
#include "Textures.h"
#include "Fonts.h"
#include "Position.h"
#include <string>
#include "MouseEvents.h"
#include "AppDetail.h"

class AppPreview: public sf::Drawable, public sf::Transformable {
private:
    SpriteImage img;
    sf::RectangleShape border;
    sf::Text appName;

    bool selected = false;
public:
    AppPreview(AppsEnum app);

    void setPosition(float x,float y);
    void setPosition(const sf::Vector2f& pos);

    void setSize(float x,float y);
    void setSize(const sf::Vector2f& size);

    sf::FloatRect getGlobalBounds() const;

    void setOutlineColor(const sf::Color& color);
    void setAppNameColor(const sf::Color& color);

    void hover(const sf::RenderWindow& window);

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //FINALPROJECT_APPPREVIEW_H

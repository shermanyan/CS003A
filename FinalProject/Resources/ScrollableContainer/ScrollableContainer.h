//
// Created by Sherman Yan on 12/9/22.
//

#ifndef FINALPROJECT_SCROLLABLECONTAINER_H
#define FINALPROJECT_SCROLLABLECONTAINER_H

#include <SFML/Graphics.hpp>
#include "ScrollEnum.h"
#include "Tools/Position.h"
template<class T>
class ScrollableContainer : public sf::Drawable, public sf::Transformable{
private:
    static int MAX_ITEMS;
    float spacing = 30;
    std::vector<T*> items;

    int direction = 1;

    ScrollEnum scrollDirection = HORIZONTAL;

public:
    ScrollableContainer();
    ScrollableContainer(ScrollEnum scrollDirection, float spacing);

    void scroll(float delta, const sf::FloatRect & bound);
    void addComponent(T* item);
    void reverseScrollDirection();
    void setItemSpacing(float spacing);

    sf::FloatRect getGlobalBounds() const;

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    void setPosition(float x, float y);
    void setPosition(sf::Vector2f pos);

    void update();
};

#include "ScrollableContainer.cpp"

#endif //FINALPROJECT_SCROLLABLECONTAINER_H

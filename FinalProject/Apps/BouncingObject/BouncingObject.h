//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_BOUNCINGOBJECT_H
#define FINALPROJECT_BOUNCINGOBJECT_H
#include "Application/DisplayableApplication.h"
#include "Tools/States.h"
#include "statesEnum.h"

template<class T>
class BouncingObject: public AppComponent, public States{
private:
    T obj;
    sf::Vector2f objSpeed = {0.2,0.2};
    void bounce(const sf::Vector2u &windowSize);

public:

    BouncingObject(sf::Color Color);
//    void bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> & bounceSurfaces);
    void setSpeed(const sf::Vector2f& speed);
    void setSize(float size);

public:
    virtual void eventHandler(sf::RenderWindow &window, const sf::Event &event);
    virtual void update(const sf::RenderWindow &window);
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#include "BouncingObject.cpp"

#endif //FINALPROJECT_BOUNCINGOBJECT_H

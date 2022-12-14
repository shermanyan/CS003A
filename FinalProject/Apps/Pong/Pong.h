//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_PONG_H
#define FINALPROJECT_PONG_H


#include "Application/AppComponent.h"
#include "PingPongBall.h"
#include "Paddle.h"

class Pong: public AppComponent{

private:
    const sf::Vector2u WINDOW_SIZE = {1920,1080};
    PingPongBall b;
    Paddle pad1 = {WINDOW_SIZE,sf::Color::Blue, Paddle::side::right};
    Paddle pad2 = {WINDOW_SIZE,sf::Color::Red, Paddle::side::left};

    bool play = false;
protected:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
public:
    Pong();

};


#endif //FINALPROJECT_PONG_H

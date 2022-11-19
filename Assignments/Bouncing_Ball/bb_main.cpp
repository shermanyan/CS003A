//
// Created by Sherman Yan on 9/29/22.
//

#include "bouncingBall.h"
#include "paddle.h"

int main() {

    sf::RenderWindow window(sf::VideoMode({2000,1000}), "bounce ball");

    bouncingBall ball;

    ball.setRadius(50);
    ball.setPosition(window.getSize().x/2 - ball.getRadius() ,window.getSize().y/2 - ball.getRadius() );
    ball.setFillColor( sf::Color::Magenta);
    ball.setBallSpeed({.25,0.1});

    paddle pad1(window.getSize(),sf::Color::Blue,paddle::side::right);
    paddle pad2(window.getSize(),sf::Color::Red,paddle::side::left);

    pad1.setPaddleSpeed(.5);
    pad2.setPaddleSpeed(.5);

    paddle pad3(window.getSize(),sf::Color::Green,paddle::side::top);
    paddle pad4(window.getSize(),sf::Color::Yellow,paddle::side::bottom);

    bool play = false;

    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();

        }
        sf::Vector2u windowSize = window.getSize();

        pad1.movePaddle(windowSize, paddle::direction::up, sf::Keyboard::Up);
        pad1.movePaddle(windowSize, paddle::direction::down, sf::Keyboard::Down);

        pad2.movePaddle(windowSize, paddle::direction::up, sf::Keyboard::W);
        pad2.movePaddle(windowSize, paddle::direction::down, sf::Keyboard::S);

        pad3.movePaddle(windowSize, paddle::direction::left, sf::Keyboard::A);
        pad3.movePaddle(windowSize, paddle::direction::right, sf::Keyboard::D);

//        pad4.movePaddle(windowSize, paddle::direction::left, sf::Keyboard::Left);
//        pad4.movePaddle(windowSize, paddle::direction::right, sf::Keyboard::Right);

        if (play) {

            ball.bounce(windowSize,std::vector<sf::FloatRect>(
                    {pad1.getGlobalBounds(), pad2.getGlobalBounds()}));
//            ball.bounce(std::vector<sf::FloatRect>(
//                    {pad1.getGlobalBounds(), pad2.getGlobalBounds(),pad3.getGlobalBounds(),pad4.getGlobalBounds()}));

        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
            play = !play;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R)) {
            play = false;
            ball.setPosition(window.getSize().x/2 - ball.getRadius() ,window.getSize().y/2 - ball.getRadius() );
        }

        window.clear();

        window.draw(ball);
        window.draw(pad1);
        window.draw(pad2);
//        window.draw(pad3);
//        window.draw(pad4);
        window.display();

    }
    return 0;
}

//
// Created by Sherman Yan on 10/10/22.
//

#ifndef BOUNCING_BALL_PADDLE_H
#define BOUNCING_BALL_PADDLE_H

#include <SFML/Graphics.hpp>

class paddle : public sf::RectangleShape {
private:
    sf::Vector2f paddleSpeed;

public:
    struct direction {

        sf::Vector2f multiplier ;
        direction(float speedX, float speedY) : multiplier({speedX,speedY}){}

        static const direction up;
        static const direction down;
        static const direction left;
        static const direction right;

    };

    struct side {

        int sideIndex;

        side(int sideIndex): sideIndex(sideIndex){}

        static const side top;
        static const side bottom;
        static const side left;
        static const side right;

    };

private:
    side paddleSide = side::left;
    void setPaddleSide(const sf::Vector2u &windowSize ,const side& side);
    void setPaddleSize(const side& side, const sf::Vector2f &size);

public:
    paddle(const sf::Vector2u &windowSize, const sf::Color &color);
    paddle(const sf::Vector2u &windowSize, const sf::Color& color, const side& side);
    paddle(const sf::Vector2u &windowSize, const sf::Color &color, float speed, const sf::Vector2f& size, const side& side);

    void movePaddle(const sf::Vector2u& range, const direction &direction, const sf::Keyboard::Key& key);
    void setPaddleSpeed(float speed);



};


#endif //BOUNCING_BALL_PADDLE_H

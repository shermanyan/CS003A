//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_PADDLE_H
#define FINALPROJECT_PADDLE_H
#include <SFML/Graphics.hpp>

class Paddle : public sf::RectangleShape {
private:
    sf::Vector2f paddleSpeed;

public:
    struct direction {

        sf::Vector2f multiplier ;
        direction(float speedX, float speedY) : multiplier({speedX,speedY}){}

        static const direction up;
        static const direction down;
    };

    struct side {

        int sideIndex;

        side(int sideIndex): sideIndex(sideIndex){}

        static const side left;
        static const side right;

    };

private:
    side paddleSide = side::left;
    void setPaddleSize(const side& side, const sf::Vector2f &size);
public:
    void setPaddlePosition(const sf::Vector2u &windowSize ,const side& side);

public:
    Paddle(const sf::Vector2u &windowSize, const sf::Color &color);
    Paddle(const sf::Vector2u &windowSize, const sf::Color& color, const side& side);
    Paddle(const sf::Vector2u &windowSize, const sf::Color &color, float speed, const sf::Vector2f& size, const side& side);

    void movePaddle(const sf::Vector2u& range, const direction &direction, const sf::Keyboard::Key& key);
    void setPaddleSpeed(float speed);



};


#endif //FINALPROJECT_PADDLE_H

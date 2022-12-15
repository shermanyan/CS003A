//
// Created by Sherman Yan on 12/14/22.
//

#ifndef FINALPROJECT_VESSEL_H
#define FINALPROJECT_VESSEL_H

#include "SpriteImage.h"
#include "Textures.h"
#include <cmath>
class Vessel :public SpriteImage{

private:
    static float MAX_SPEED;
    float boost = 0.000005;
    sf::Vector2f velocity = {0.0,0.0};

    unsigned int foodEaten = 0;

    float getSign(float number);

public:
    Vessel();
    void move(const sf::RenderWindow& window);

    template<class T>
    void eat(std::vector<T>& food);

    unsigned int getEatNumber();


};

template<class T>
void Vessel::eat(std::vector<T>& food) {
    for (auto &t: food)
        if (getGlobalBounds().intersects(t.getGlobalBounds())) {
            foodEaten++;
            food.erase(std::find(food.begin(),food.end(),t));
        }
}


#endif //FINALPROJECT_VESSEL_H

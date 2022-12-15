//
// Created by Sherman Yan on 12/14/22.
//

#include "TrashGenerator.h"
#include <iostream>

TrashGenerator::TrashGenerator() {

}
void TrashGenerator::generate(const sf::FloatRect& bound,const sf::Clock& clock) {

    if (clock.getElapsedTime().asMilliseconds() % (int)(1000*generationSpeed) == 0  && trash.size() < maxTrash + 1) {
        sf::Vector2f pos = {(float) (rand() % (int)bound.width) + bound.left, (float) (rand() % (int)bound.height) + bound.top};
        trash.emplace_back(pos);
    }


}

void TrashGenerator::setMaxTrash(unsigned int max) {
    maxTrash = max;
}

void TrashGenerator::resetGenerationSpeed() {
    generationSpeed = 10;
}

void TrashGenerator::reset() {
    trash.clear();
    resetGenerationSpeed();
}



void TrashGenerator::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    for (auto& a: trash)
        target.draw(a);
}

void TrashGenerator::updateTime(const sf::Clock &clock) {

    time = clock.getElapsedTime();

}

void TrashGenerator::increaseGenerationSpeed() {
    if (generationSpeed < MAX_GENERATION)
        generationSpeed += 1;
}
void TrashGenerator::decreaseGenerationSpeed() {
    if (generationSpeed > MIN_GENERATION)
        generationSpeed -= 1;
}

void TrashGenerator::setGenerationInterval(float second) {
    generationSpeed = second;
}

std::vector<Trash> &TrashGenerator::getTrash() {
    return trash;
}




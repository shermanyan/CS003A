//
// Created by Sherman Yan on 12/14/22.
//

#ifndef FINALPROJECT_TRASHGENERATOR_H
#define FINALPROJECT_TRASHGENERATOR_H
#include <vector>
#include "Trash.h"

class TrashGenerator: public sf::Drawable{
private:

    std::vector<Trash> trash;

    sf::Time time;
    unsigned int maxTrash = 10;
    float generationSpeed = 10;
    static const unsigned int MAX_GENERATION = 10;
    static const unsigned int MIN_GENERATION = 0;


    void updateTime(const sf::Clock& clock);
public:
    TrashGenerator();
    void generate(const sf::FloatRect& bound, const sf::Clock& clock);

    void setMaxTrash(unsigned int max);
    void increaseGenerationSpeed();
    void decreaseGenerationSpeed();
    void setGenerationInterval(float second);

    void resetGenerationSpeed();

    void reset();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    std::vector<Trash>& getTrash();
};



#endif //FINALPROJECT_TRASHGENERATOR_H

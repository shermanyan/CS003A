//
// Created by Sherman Yan on 11/22/22.
//

#include "Circle.h"

void Circle::draw(sf::RenderTarget &target, sf::RenderStates states) const{

    if(!checkStates(HIDDEN))
        target.draw(circ);
}
Circle::Circle() : circ(50) {

}

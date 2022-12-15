//
// Created by Sherman Yan on 12/14/22.
//

#include "Trash.h"
#include <iostream>
Trash::Trash():Trash({100, 100}) {
}

Trash::Trash(const sf::Vector2f &pos) {
    setTexture(Textures::getTexture(TextureEnums((rand() % (LAST_TRASH - TRASH_1)) + TRASH_1)));
    setWidth((rand() % 25 ) + 30);
    setRotation(rand()% 360);
    setPosition(pos);
}

bool operator==(const Trash &left, const Trash &right) {
    return &left == &right;
}

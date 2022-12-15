//
// Created by Sherman Yan on 12/14/22.
//

#ifndef FINALPROJECT_TRASH_H
#define FINALPROJECT_TRASH_H

#include "SpriteImage.h"
#include "Textures.h"

class Trash: public SpriteImage  {

private:
public:
    Trash();
    Trash(const sf::Vector2f& pos);

    friend bool operator==(const Trash& left, const Trash& right);
};


#endif //FINALPROJECT_TRASH_H

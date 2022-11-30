//
// Created by Sherman Yan on 11/22/22.
//

#ifndef SFMLHELPERS_TEXTURES_H
#define SFMLHELPERS_TEXTURES_H

#include "TexturesEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class Textures {

private:
    static std::map<TextureEnums, sf::Texture> map;
    static void load(TextureEnums texture);
    static std::string getPath(TextureEnums texture);
public:
    static sf::Texture& getTexture(TextureEnums font);

};


#endif //SFMLHELPERS_TEXTURES_H

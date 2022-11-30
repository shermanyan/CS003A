//
// Created by Sherman Yan on 11/22/22.
//

#include "Textures.h"
std::map<TextureEnums, sf::Texture> Textures::map;

void Textures::load(TextureEnums font) {
    if(!map[font].loadFromFile(getPath(font)))
        exit(20);
}

std::string Textures::getPath(TextureEnums texture) {
    switch (texture){
        case DONKE:
            return "Donke.png";
        case LAST_IMG:
            return "";
    }
}

sf::Texture &Textures::getTexture(TextureEnums texture) {
    load(texture);
    return map.at(texture);
}

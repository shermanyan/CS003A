//
// Created by Sherman Yan on 11/22/22.
//

#include "Fonts.h"
std::map<FontsEnum, sf::Font> Fonts::map;

void Fonts::load(FontsEnum font) {
    if(!map[font].loadFromFile(getPath(font)))
        exit(20);
}

std::string Fonts::getPath(FontsEnum font) {
    switch (font) {
        case OPEN_SANS:
            return "OpenSans-Bold.ttf";
        case LAST_FONT:
            return "";
    }
}

sf::Font &Fonts::getFont(FontsEnum font) {
    load(font);
    return map.at(font);
}

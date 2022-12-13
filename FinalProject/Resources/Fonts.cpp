//
// Created by Sherman Yan on 12/6/22.
//

#include "Fonts.h"

std::map<FontsEnum, sf::Font> Fonts::map;

void Fonts::load(FontsEnum font) {

    if (map.count(font) == 0 && !map[font].loadFromFile(getPath(font)))
        exit(20);

}

std::string Fonts::getPath(FontsEnum font) {
    switch (font) {
        case OPEN_SANS:
            return "Resources/fonts/OpenSans-Bold.ttf";
        case COURIER:
            return "Resources/fonts/Courier.ttf";
        case PTSERIF_BOLD:
            return "Resources/fonts/PTSerif-Bold.ttf";
        case SONO_BOLD:
            return "Resources/fonts/Sono-Bold.ttf";
        case TITAN_ONE:
            return "Resources/fonts/TitanOne-Regular.ttf";;
        case LILITA_ONE:
            return "Resources/fonts/LilitaOne-Regular.ttf";;

    }
}

sf::Font &Fonts::getFont(FontsEnum font) {
    if (map.count(font) == 0)
        load(font);
    return map.at(font);
}

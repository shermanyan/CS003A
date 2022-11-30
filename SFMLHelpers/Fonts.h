//
// Created by Sherman Yan on 11/22/22.
//

#ifndef SFMLHELPERS_FONTS_H
#define SFMLHELPERS_FONTS_H

#include "FontsEnum.h"
#include <SFML/Graphics.hpp>
#include <map>

class Fonts {

private:
    static std::map<FontsEnum, sf::Font> map;
    static void load(FontsEnum font);
    static std::string getPath(FontsEnum font);
public:
    static sf::Font& getFont(FontsEnum font);

};


#endif //SFMLHELPERS_FONTS_H

//
// Created by Sherman Yan on 12/6/22.
//

#ifndef FINALPROJECT_FONTS_H
#define FINALPROJECT_FONTS_H

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

#endif //FINALPROJECT_FONTS_H

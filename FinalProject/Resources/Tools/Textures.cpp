//
// Created by Sherman Yan on 12/6/22.
//

#include "Textures.h"

std::map<TextureEnums, sf::Texture> Textures::map;

void Textures::load(TextureEnums texture) {
    if (map.count(texture) == 0 &&!map[texture].loadFromFile(getPath(texture)))
        exit(20);
}

std::string Textures::getPath(TextureEnums texture) {
    switch (texture){
        case HOME:
            return "Resources/textures/home.png";
        case CLUB:
            return "Resources/textures/suits/club.png";
        case DIAMOND:
            return "Resources/textures/suits/diamond.png";
        case HEART:
            return "Resources/textures/suits/heart.png";
        case SPADE:
            return "Resources/textures/suits/spade.png";
        case GP_GREEN_BALL:
            return "Resources/textures/gamePreviews/greenball.png";
        case GP_BOUNCING_BALL:
            return "Resources/textures/gamePreviews/bouncingball.png";
        case GP_OCEAN_CLEANUP:
            return "Resources/textures/gamePreviews/oceancleanup.png";
        case GP_PLAYING_CARD:
            return "Resources/textures/gamePreviews/playingcard.png";
        case GP_POKER_ANALYSIS:
            return "Resources/textures/gamePreviews/pokeranalysis.png";
        case GP_PONG:
            return "Resources/textures/gamePreviews/pong.png";
        case GP_TOP_HAT_GUY:
            return "Resources/textures/gamePreviews/tophatguy.png";
        case SKIRT:
            return "Resources/textures/skirt.png";
    }
}

sf::Texture &Textures::getTexture(TextureEnums texture) {
    if (map.count(texture) == 0)
        load(texture);
    return map.at(texture);
}

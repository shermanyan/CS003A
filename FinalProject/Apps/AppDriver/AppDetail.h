//
// Created by Sherman Yan on 12/12/22.
//

#ifndef FINALPROJECT_APPDETAIL_H
#define FINALPROJECT_APPDETAIL_H
#include "AppsEnum.h"
#include "Textures.h"
#include <string>
#include <SFML/Graphics.hpp>

class AppDetail {

public:
    static std::string getAppName(AppsEnum app);
    static sf::Texture& getTexture(AppsEnum app);
    static std::string getAppSummary(AppsEnum app);
};


#endif //FINALPROJECT_APPDETAIL_H

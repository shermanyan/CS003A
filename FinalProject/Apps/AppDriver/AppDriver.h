//
// Created by Sherman Yan on 12/9/22.
//

#ifndef FINALPROJECT_APPDRIVER_H
#define FINALPROJECT_APPDRIVER_H

#include <vector>
#include "AppsEnum.h"
#include "Application/DisplayableApplication.h"

class AppDriver {
public:
    static void openApp(AppsEnum app, sf::RenderWindow& window);

};


#endif //FINALPROJECT_APPDRIVER_H

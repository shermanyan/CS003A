//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_APP_BOUNCINGOBJECT_H
#define FINALPROJECT_APP_BOUNCINGOBJECT_H
#include "DisplayableApplication.h"
#include "BouncingObject.h"
#include "Ball.h"
#include "AppSwitchButton.h"

class App_BouncingObject: public DisplayableApplication{

public:
private:
    BouncingObject<Ball> b = {sf::Color::Green};

public:
    App_BouncingObject();
};


#endif //FINALPROJECT_APP_BOUNCINGOBJECT_H

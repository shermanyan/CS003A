//
// Created by Sherman Yan on 12/9/22.
//

#ifndef FINALPROJECT_APP_TOPHATGUY_H
#define FINALPROJECT_APP_TOPHATGUY_H
#include "Application/DisplayableApplication.h"
#include "topHatGuyComponent.h"

class App_TopHatGuy: public DisplayableApplication {
private:
    topHatGuyComponent t;
public:
    App_TopHatGuy();
};


#endif //FINALPROJECT_APP_TOPHATGUY_H

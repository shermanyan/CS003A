//
// Created by Sherman Yan on 12/7/22.
//

#include "App_Pong.h"

App_Pong::App_Pong() :
DisplayableApplication{"Pong",sf::Color(119, 176, 83)}{
    addComponent(p);
}

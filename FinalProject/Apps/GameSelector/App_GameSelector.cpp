//
// Created by Sherman Yan on 12/10/22.
//

#include "App_GameSelector.h"

App_GameSelector::App_GameSelector():
DisplayableApplication("Home", sf::Color(61, 59, 51)) {
    addComponent(g);
    disableExit();
}

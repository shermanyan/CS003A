//
// Created by Sherman Yan on 12/10/22.
//

#include "App_GameSelector.h"

App_GameSelector::App_GameSelector():
DisplayableApplication("Home",{30,30,30}) {
    addComponent(g);
    disableExit();
}

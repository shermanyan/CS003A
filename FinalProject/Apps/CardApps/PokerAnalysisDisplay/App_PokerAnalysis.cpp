//
// Created by Sherman Yan on 12/8/22.
//

#include "App_PokerAnalysis.h"

App_PokerAnalysis::App_PokerAnalysis():
DisplayableApplication{"PokerAnalysis",sf::Color(53, 101, 77)} {
    p = {simulationTimes,Analysis::simulate(simulationTimes)};
    setWindowSize({800,1050});
    addComponent(p);
}

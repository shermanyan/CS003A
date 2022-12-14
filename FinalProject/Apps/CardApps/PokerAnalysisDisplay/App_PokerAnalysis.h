//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_APP_POKERANALYSIS_H
#define FINALPROJECT_APP_POKERANALYSIS_H
#include "Application/DisplayableApplication.h"
#include "PokerAnalysisDisplay.h"
#include "Analysis.h"

class App_PokerAnalysis: public DisplayableApplication {
private:
    PokerAnalysisDisplay p;
    int simulationTimes = 650000;
public:
    App_PokerAnalysis();


};


#endif //FINALPROJECT_APP_POKERANALYSIS_H

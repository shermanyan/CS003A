//
// Created by Sherman Yan on 11/22/22.
//

#ifndef SFMLHELPERS_STATES_H
#define SFMLHELPERS_STATES_H

#include <map>
#include "statesEnum.h"

class States {
private:
    std::map<StatesEnum,bool> map;
    void load();
public:
    States();
    bool checkStates(StatesEnum state) const;
    void enableState(StatesEnum state);
    void disableState(StatesEnum state);
    void setState(StatesEnum state, bool value);
    void toggleState(StatesEnum state);

};


#endif //SFMLHELPERS_STATES_H

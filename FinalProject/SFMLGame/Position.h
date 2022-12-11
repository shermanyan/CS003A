//
// Created by Sherman Yan on 12/9/22.
//

#ifndef FINALPROJECT_POSITION_H
#define FINALPROJECT_POSITION_H

#include <SFML/Graphics.hpp>

class Position {

public:
    template<class T, class S>
    static void left( T& self,const S& ref, float spacing = 0);
    template<class T, class S>
    static void right( T& self,const S& ref, float spacing = 0);
    template<class T, class S>
    static void top( T& self, const S& ref, float spacing = 0);
    template<class T, class S>
    static void bottom( T& self, const S& ref, float spacing = 0);
    template<class T, class S>
    static void center(T& self,const S& ref);

};

#include "Position.cpp"

#endif //FINALPROJECT_POSITION_H

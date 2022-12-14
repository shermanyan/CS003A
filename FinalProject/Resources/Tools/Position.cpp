//
// Created by Sherman Yan on 12/9/22.
//
#ifndef FINALPROJECT_POSITION_CPP
#define FINALPROJECT_POSITION_CPP

#include "Position.h"
template<class T, class S>
void Position::left(T& self, const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left - r.width - spacing, s.top});
}

template<class T, class S>
void Position::right(T& self,const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({r.left + r.width + spacing, s.top});
}

template<class T, class S>
void Position::center(T& self, const S& ref) {
    sf::FloatRect s = self.getLocalBounds();
    sf::FloatRect r = ref.getLocalBounds();
    self.setPosition({s.left - ((s.left + s.width/2) - (r.left + r.width/2)),
                      s.top - ((s.top + s.height/2) - (r.top + r.height/2))});
}

template<class T, class S>
void Position::bottom(T& self, const S& ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left, r.top + r.height + spacing});
}

template<class T, class S>
void Position::top(T &self,const S &ref, float spacing) {
    sf::FloatRect s = self.getGlobalBounds();
    sf::FloatRect r = ref.getGlobalBounds();
    self.setPosition({s.left,r.top - s.height - spacing});
}

#endif

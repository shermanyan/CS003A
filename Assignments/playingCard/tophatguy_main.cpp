//
// Created by Sherman Yan on 11/15/22.
//
#include "topHatGuy.h"

int main(){

    sf::RenderWindow window({1000,1000,32},"playing card");
    window.setFramerateLimit(60);

    topHatGuy g;

    g.setPosition(300,100);
    while(window.isOpen()){
        sf::Event event;

        while(window.pollEvent(event)){
            if (sf::Event::Closed == event.type)
                window.close();
        }


        window.clear();
        window.draw(g);
        window.display();
    }
    return 0;
}
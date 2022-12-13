#include <iostream>
#include "Circle.h"
#include "Fonts.h"
#include "Position.h"
#include "Textures.h"

int main() {

    sf::RenderWindow window({720,420,32}, "window");

    window.setFramerateLimit(60);

    Circle c;
    sf::Text t;
    t.setString("HELL0 WORLD");
    t.setCharacterSize(40);
    t.setFont(Fonts::getFont(OPEN_SANS));
    t.setPosition(150,50);

    sf::Sprite i;

    i.setTexture(Textures::getTexture(DONKE));
    i.setPosition(0,150);
    i.setScale(0.1,0.1);
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(c);
        window.draw(t);
        window.draw(i);
        window.display();
    }
    return 0;
}

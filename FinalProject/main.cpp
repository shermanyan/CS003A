//
// Created by Sherman Yan on 12/6/22.
//
#include <SFML/Graphics.hpp>
#include "AppDriver.h"
#include "MouseEvents.h"
#include "Fonts.h"
#include "Position.h"

int main() {

    srand(time(0));

    std::string windowName = "Final Project";
    sf::Vector2u windowSize = {1920, 1080};
    sf::RenderWindow window = {{windowSize.x, windowSize.y, 32}, windowName};

    sf::Text title;
    sf::Text name;
    sf::Text start;

    title.setString("Project Portfolio");
    name.setString("Sherman Yan");
    start.setString("START");

    title.setCharacterSize(100);
    title.setFont(Fonts::getFont(LILITA_ONE));
    title.setFillColor({204, 153, 0});
    title.setOrigin(title.getGlobalBounds().width/2 , title.getGlobalBounds().height/2);
    title.setPosition(windowSize.x/2,windowSize.y/2 - 100);

    name.setCharacterSize(50);
    name.setFont(Fonts::getFont(TITAN_ONE));
    name.setFillColor({80, 80, 80});
    Position::center(name,title);
    Position::bottom(name,title,10);

    start.setCharacterSize(30);
    start.setFont(Fonts::getFont(TITAN_ONE));
    Position::center(start,name);
    Position::bottom(start,name,100);


    while (window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Event::Resized == event.type) {
                sf::FloatRect eV(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(eV));

                title.setPosition(window.getSize().x/2,window.getSize().y/2-100);
                Position::center(name,title);
                Position::bottom(name,title,10);
                Position::center(start,name);
                Position::bottom(start,name,100);

            }
            if (MouseEvents::isHover(start,window)){
                start.setFillColor({230, 230, 230});
            }
            else {
                start.setFillColor({100, 100, 100});
            }
        }

        if (MouseEvents::isClick(start,window)){
            AppDriver::openApp(APP_HOME, window);
        }

        window.clear({30,30,30});
        window.draw(name);
        window.draw(title);
        window.draw(start);
        window.display();
    }
}






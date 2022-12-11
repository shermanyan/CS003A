//
// Created by Sherman Yan on 12/6/22.
//

#include "GameConsoleFunctions.h"

int main(){
    sf::Color bgColor = sf::Color::Black;
    std::string windowName = "GameConsole" ;
    sf::Vector2u windowSize = {1920,1080};
    sf::RenderWindow window = {{windowSize.x,windowSize.y,32},windowName};

    window.setFramerateLimit(60);

    std::map<GamesEnum,DisplayableApplication> games;

    while(window.isOpen()){

        sf::Event event;
        while(window.pollEvent(event)){

            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
            runGame(PONG,window);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
            runGame(BOUNCING_BALL,window);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
            runGame(GREEN_BALL,window);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
            runGame(PLAYING_CARD,window);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
            runGame(POKER_ANALYSIS,window);
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
            runGame(TOP_HAT_GUY,window);

        window.setTitle(windowName);
        window.setSize(windowSize);

        window.clear(bgColor);
        window.display();
    }
}






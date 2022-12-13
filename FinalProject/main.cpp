//
// Created by Sherman Yan on 12/6/22.
//
#include <SFML/Graphics.hpp>
#include "AppDriver.h"
int main(){

    srand(time(0));

    sf::Color bgColor = sf::Color::Black;
    std::string windowName = "GameConsole" ;
    sf::Vector2u windowSize = {1920,1080};
    sf::RenderWindow window = {{windowSize.x,windowSize.y,32},windowName};


//    AppDriver::openApp(APP_BOUNCING_BALL,window);
    AppDriver::openApp(APP_HOME,window);

}





//
// Created by Sherman Yan on 12/6/22.
//
#include <SFML/Graphics.hpp>
#include "AppDriver.h"

int main() {

    srand(time(0));

    std::string windowName = "Final Project";
    sf::Vector2u windowSize = {1920, 1080};
    sf::RenderWindow window = {{windowSize.x, windowSize.y, 32}, windowName};

    AppDriver::openApp(APP_OCEAN_CLEANUP, window);

}






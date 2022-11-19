//
// Created by Sherman Yan on 11/18/22.
//

#include "DisplayWindow.h"

#include <utility>

DisplayWindow::DisplayWindow(sf::VideoMode videoMode, std::string name, sf::Color backgroundColor):
        videoMode(videoMode), windowName(std::move(name)), bgColor(backgroundColor)
{}

DisplayWindow::DisplayWindow() :
        DisplayWindow({720,420,32},"application" , sf::Color::Black)
{}


void DisplayWindow::addComponent(sf::Drawable& drawable) {

    components.push_back(&drawable);
}

void DisplayWindow::run() {

    sf::RenderWindow window(videoMode,windowName);
    window.setFramerateLimit(60);

    while(window.isOpen()){
        sf::Event event;

        while(window.pollEvent(event)){
            if (sf::Event::Closed == event.type)
                window.close();
        }

        window.clear(bgColor);

        for (sf::Drawable *c: components)
            window.draw(*c);

        window.display();
    }

}

void DisplayWindow::setBgColor(const sf::Color &bgColor) {
    DisplayWindow::bgColor = bgColor;
}

void DisplayWindow::setComponents(const std::vector<sf::Drawable *> &components) {
    DisplayWindow::components = components;
}

void DisplayWindow::setVideoMode(const sf::VideoMode &videoMode) {
    DisplayWindow::videoMode = videoMode;
}

void DisplayWindow::setWindowName(const std::string &windowName) {
    DisplayWindow::windowName = windowName;
}


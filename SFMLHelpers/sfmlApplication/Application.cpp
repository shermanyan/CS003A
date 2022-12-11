//
// Created by Sherman Yan on 11/17/22.
//

#include "Application.h"

Application::Application(sf::VideoMode videoMode, const std::string &name, sf::Color backgroundColor):
        videoMode(videoMode), windowName(name), bgColor(backgroundColor)
{}

Application::Application() :
        Application({720,420,32},"application" , sf::Color::Black)
{}


void Application::addComponent(Component& component) {

    components.push_back(&component);
}

void Application::run() {

    sf::RenderWindow window(videoMode,windowName);
    window.setFramerateLimit(60);

    while(window.isOpen()){
        sf::Event event;

        while(window.pollEvent(event)){
            if (sf::Event::Closed == event.type)
                window.close();
            for(EventHandleable *c : components)
                c->eventHandler(window,event);
        }

        for (Updatable* u : components)
            u->update();

        window.clear();

        for (sf::Drawable *c: components) {
            window.draw(*c);
        }

        window.display();
    }

}

void Application::setBgColor(const sf::Color &bgColor) {
    Application::bgColor = bgColor;
}


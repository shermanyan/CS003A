//
// Created by Sherman Yan on 12/6/22.
//

#include "DisplayableApplication.h"

DisplayableApplication::DisplayableApplication() {
}

DisplayableApplication::DisplayableApplication(const std::string &windowName){
    this->windowName = windowName;
}

DisplayableApplication::DisplayableApplication(const std::string &windowName, const sf::Color &bgColor){
    this->windowName = windowName;
    this->bgColor = bgColor;
}

void DisplayableApplication::addComponent(AppComponent &component) {
    components.push_back(&component);
}


void DisplayableApplication::run(sf::RenderWindow &window) {
    if (windowSize.x && windowSize.y) {
        window.setSize(windowSize);
    }

    sf::FloatRect v(0, 0, window.getSize().x, window.getSize().y);
    window.setView(sf::View(v));

    window.setTitle(windowName);

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (sf::Event::Closed == event.type)
                window.close();
            if (sf::Event::Resized == event.type) {
                sf::FloatRect eV(0, 0, event.size.width, event.size.height);
                window.setView(sf::View(eV));
            }


            for (EventHandleable *c: components)
                c->eventHandler(window, event);
        }

        for (Updatable *u: components)
            u->update(window);

        if (exitable && MouseEvents::isClick(h,window))
            break;

        window.clear(bgColor);

        for (sf::Drawable *c: components) {
            window.draw(*c);
        }

        if (exitable)
            window.draw(h);

        window.display();
    }
}

void DisplayableApplication::setWindowSize(const sf::Vector2u &windowSize) {
    this->windowSize = windowSize;
}


void DisplayableApplication::disableExit() {
    exitable = false;
}













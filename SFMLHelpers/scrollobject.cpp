//
// Created by Sherman Yan on 12/9/22.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024,576,32), "scroll");

    std::vector<sf::RectangleShape*> shapes;

    for (int i = 0; i < 10; ++i) {
        sf::RectangleShape *shape = new sf::RectangleShape;
        shape->setSize({160, 90});
        shape->setPosition(100,400);
        shape->setFillColor(sf::Color::Green);

        shapes.push_back(shape);
    }


    float spacing = 10;



    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close the window if the user presses the close button
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::Wheel::HorizontalWheel)
                shapes[0]->move(event.mouseWheelScroll.delta,0);
        }
        for (int i = 1; i < shapes.size(); ++i) {
            shapes[i]->setPosition(shapes[i-1]->getGlobalBounds().left + shapes[i-1]->getGlobalBounds().width + spacing, shapes[i]->getPosition().y);
        }
        window.clear(sf::Color::Black);

        for (sf::RectangleShape *s: shapes) {
            window.draw(*s);
        }

        window.draw(*shapes[0]);
        window.display();
    }

    for (int i = 0; i < shapes.size(); ++i) {
        delete shapes[i];
    }

    return 0;
}





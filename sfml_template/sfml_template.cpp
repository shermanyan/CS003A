#include <SFML/Graphics.hpp>

int main()
{

    sf::Vector2u windowSize({600,600});
    sf::RenderWindow window({windowSize.x,windowSize.y}, "SFML Tutorial");

    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Magenta);
    circle.setPosition({0,0});

    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        circle.move(0.1,0.1);

        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}

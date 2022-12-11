#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 1000), "Falling Object");

    sf::Sprite dog;
    sf::Texture doggie;
    doggie.loadFromFile("Donke.png");
    dog.setTexture(doggie);
    dog.setScale(0.05,0.05);
    sf::FloatRect d = dog.getLocalBounds();
    dog.setOrigin(d.left + d.width/2,d.top +d.height/2);
    dog.setPosition(window.getSize().x/2 , 300);

    sf::Font font;
    font.loadFromFile("OpenSans-Bold.ttf");

    sf::Text rotate;
    rotate.setFont(font);

    sf::Vector2f velocity = {0.0,0.0};

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            velocity.x += 0.000008f * sin(dog.getRotation() * 3.14f/180);
            velocity.y -= 0.000008f * cos(dog.getRotation()* 3.14f/180);
        }

        sf::FloatRect dPos = dog.getGlobalBounds();

        if(dPos.left + dPos.width + velocity.x > window.getSize().x || dPos.left + velocity.x < 0)
            velocity.x = 0;
        if(dPos.top + dPos.height + velocity.y > window.getSize().y || dPos.top + velocity.y < 0)
            velocity.y = 0;


//        velocity.y += GRAVITY;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
            dog.setPosition(window.getSize().x / 2, 500);
            velocity = {0,0};
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            dog.rotate(-0.05);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            dog.rotate(0.05);

        dog.move(velocity.x,velocity.y);


        std::string rota = std::to_string(dog.getRotation()) ;
        rotate.setString(rota.substr(0,rota.find('.')) + " " + std::to_string(velocity.x) + " " +std::to_string(velocity.y));

        window.clear();
        window.draw(rotate);
        window.draw(dog);

        window.display();
    }

    return 0;
}
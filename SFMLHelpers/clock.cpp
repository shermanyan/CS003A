#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

int main()
{
    // Create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Timer");

    // Create the timer
    sf::Clock timer;

    sf::Font font;
    font.loadFromFile("OpenSans-Bold.ttf");
    // Start the timer
    timer.restart();

    // Run the main loop
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
        }

        // Clear the screen
        window.clear(sf::Color::Black);

        // Draw the elapsed time
        sf::Text elapsedTimeText;
        elapsedTimeText.setFont(font);
        std::string time = std::to_string(timer.getElapsedTime().asSeconds());
        elapsedTimeText.setString("Elapsed time: " + time.substr(0,time.find('.') + 3) + " seconds");
        window.draw(elapsedTimeText);

        // Display the window contents
        window.display();
    }

    return 0;
}





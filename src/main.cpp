#include <SFML/Graphics.hpp>
#include "Player.cpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    Player player;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(player.sprite);
        window.display();
    }

    return 0;
}

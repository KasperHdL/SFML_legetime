#include <SFML/Graphics.hpp>
#include "Player.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

    Player player;
    sf::Clock clock;


    while (window.isOpen())
    {
        clock.restart();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed){
              if(event.key.code == sf::Keyboard::Up)
                player.upPressed = true;
              if(event.key.code == sf::Keyboard::Down)
                player.downPressed = true;
              if(event.key.code == sf::Keyboard::Left)
                player.leftPressed = true;
              if(event.key.code == sf::Keyboard::Right)
                player.rightPressed = true;

            }
            if (event.type == sf::Event::KeyReleased){
              if(event.key.code == sf::Keyboard::Up)
                player.upPressed = false;
              if(event.key.code == sf::Keyboard::Down)
                player.downPressed = false;
              if(event.key.code == sf::Keyboard::Left)
                player.leftPressed = false;
              if(event.key.code == sf::Keyboard::Right)
                player.rightPressed = false;

            }

        }

        player.update(clock.getElapsedTime());

        window.clear();

        //draw stuff
        window.draw(player.sprite);

        window.display();
    }

    return 0;
}

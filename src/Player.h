#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player{
  public:
      void update(sf::Time elapsed);
      Player();

      sf::Vector2f position;

      //keyboard
      bool upPressed;
      bool downPressed;
      bool leftPressed;
      bool rightPressed;

      float movementSpeed;

      sf::Sprite sprite;

  private:
  protected:
};
#endif /* end of include guard: PLAYER_H */

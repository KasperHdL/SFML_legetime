#include <SFML/Graphics.hpp>

//HEADER
class Player{
  private:
  public:
    inline Player();
    sf::Sprite sprite;
};

//FUNCTIONS

Player::Player(){
  sf::Texture texture;
  sprite.setTexture(texture);
  sprite.setTextureRect(sf::IntRect(10, 10, 50, 30));
  sprite.setColor(sf::Color(255, 255, 255, 200));
  sprite.setPosition(100, 25);
}

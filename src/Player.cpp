#include "Player.h"
#include <SFML/Graphics.hpp>

Player::Player(){
  position = sf::Vector2f();

  movementSpeed = 1000;

  sf::Texture texture;
  sprite.setTexture(texture);
  sprite.setTextureRect(sf::IntRect(0, 0, 10, 10));
  sprite.setColor(sf::Color(255, 255, 255, 200));
  sprite.setPosition(position.x,position.y);

  upPressed = false;
  downPressed = false;
  rightPressed = false;
  leftPressed = false;
}

void Player::update(sf::Time elapsed){
  sf::Vector2f vel = sf::Vector2f();
  if(upPressed){
    vel.y =  -1;
  }else if(downPressed){
    vel.y = 1;
  }
  if(leftPressed){
    vel.x =  -1;
  }else if(rightPressed){
    vel.x = 1;
  }

  position += vel * elapsed.asSeconds() * movementSpeed;

  sprite.setPosition(position.x,position.y);


}

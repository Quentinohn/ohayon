#include <iostream>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"
Character::Character(){
  //default constructor
  this->_speed=0;
  this->_max_speed=10;
}
void Character::Accelerate(){
  //Increments speed_ by 1 (up to max_speed_) if speed_ is less than max_speed_
  if(this->_speed<this->_max_speed){
    this->_speed++;
  }
}

void Character::Break(){
  //Decrements speed_ by 1 (down to 0) if speed_ is greater than 0
  if(this->_speed>0){
    this->_speed = std::max(this->_speed - 1, 0.0f);
  }
}

int main() {
    PlayerCharacter character;
    character.Accelerate();
    character.Break();
    std::cout << "Speed: " << character.speed() << std::endl;
    std::cout << character.WhatAmI() << std::endl;
    Mario mario;
    std::cout << "I am " << mario.WhatAmI() << std::endl;
    Yoshi yoshi;
    std::cout << "I am " << yoshi.WhatAmI() << std::endl;
    return 0;
}



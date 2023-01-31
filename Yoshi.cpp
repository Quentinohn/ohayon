#include "Yoshi.h"

Yoshi::Yoshi(int nbCrests) {
_nb_Crests = nbCrests;
}


std::string Yoshi::WhatAmI() const{
  //declaration of the "Yoshi" version of Character class's pure virtual function WhatAmI
  std::string name="Yoshi";
  return std::to_string(_nb_Crests) + " crested Yoshi";
}

void Yoshi::Accelerate() {
  if (_speed + 2 <= _max_speed) {
    _speed += 2;
  } else {
    _speed = _max_speed;
  }
}

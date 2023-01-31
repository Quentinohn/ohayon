#include <iostream>
#include <string>
#include "Character.h"

class Yoshi : public Character{
public:
  Yoshi(){};
  ~Yoshi()=default;
  std::string WhatAmI() const;
};
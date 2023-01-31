#include <iostream>
#include <string>
#include "Character.h"

class Mario : public Character{
public:
  Mario(){};
  ~Mario()=default;
  std::string WhatAmI() const;
};
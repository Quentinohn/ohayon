#include <iostream>
#include <string>
#include "Character.h"

class Yoshi : public Character{
protected:
  //An attribute found only in Yoshi's objects
  int _nb_Crests;
public:
  Yoshi(){};
  ~Yoshi()=default;
  Yoshi(int nbCrests);
  std::string WhatAmI() const;
  void Accelerate() override;
};
#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>
#include <string>

class Character{
protected:
  // Data member to store the speed of the character
  float _speed;
  // Data member to store the maximum speed of the character
  float _max_speed;
public:
  // Default constructor to initialize the speed and maximum speed of the character
  Character();
  ~Character()=default; //default destructor
  // Virtual function to allow for derived classes to override this implementation
  virtual void Accelerate();
  // Function to decrease the speed of the character
  void Break();
  // Inline function to return the current speed of the character
  inline float speed() const{
    return _speed;
  }
  virtual std::string WhatAmI() const = 0;
  /*At compile-time, the presence of the declaration "virtual std::string WhatAmI() const = 0;" 
  in the code causes the compiler to check if any derived classes have overridden the pure 
  virtual function "WhatAmI()". If a derived class does not implement this function, 
  the compiler will raise an error, as an abstract class with pure virtual functions 
  cannot be instantiated. The use of pure virtual functions ensures that each derived 
  class provides its own unique implementation of the virtual function, enabling polymorphism.*/
};

class PlayerCharacter : public Character {
public:
  std::string WhatAmI() const override {
    return "I am a player character";
  }
};

#endif

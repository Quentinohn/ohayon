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
};

#endif

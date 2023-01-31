#include "Mario.h"
#include "Yoshi.h"
#include <vector>

void test_speed(Character& va){
    std::cout << "Speed: " << va.speed() << std::endl;
}

void test_acceleration(Character& va){
  int j=0;
  for(int i=0;i<=10;i++){
    std::cout<<j<<"acceleration -> speed should be of "<<i<<'\n';
    std::cout<<"Speed : "<<va.speed()<<'\n';
    va.Accelerate();
    j++;
  }
  std::cout<<j<<"acceleration -> speed should be of 10"<<'\n';
  std::cout<<"Speed : "<<va.speed()<<'\n';
}

void test_break(Character& va){
  //Do the same thing as test_acceleration but instead of accelarating
  //the character it makes it break

  int j=0;
  for(int i=0;i<=10;i++){
    if (i==1 || i==10){
      std::cout<<j<<" break -> speed should be of "<<10-i<<'\n';
      std::cout<<"Speed : "<<va.speed()<<'\n';
    }
    va.Break();
    j++;
  }
  std::cout<<j<<" break -> speed should be of 0"<<'\n';
  std::cout<<"Speed : "<<va.speed()<<'\n';
}

void test_Mario(Character& va){
  test_speed(va);
  test_acceleration(va);
  test_break(va);
  std::cout<<"I am "<<va.WhatAmI()<<'\n';
}

void test_Mario_Yoshi(Character& va){
  test_speed(va);
  test_acceleration(va);
  test_break(va);
  std::cout<<"I am "<<va.WhatAmI()<<'\n';
}





int main() {
    Mario m;
    Yoshi y;
    test_speed(m);
    test_speed(y);
    test_acceleration(m);
    test_acceleration(y);
    test_break(m);
    test_break(y);
    test_Mario(m);
    test_Mario_Yoshi(y);

}
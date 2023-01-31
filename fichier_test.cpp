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


void test_acceleration_Yoshi(Yoshi& c){
  int j=0;
  for(int i=0;i<=10;i=i+2){
    std::cout<<j<<" acceleration -> speed should be of "<<i<<'\n';
    std::cout<<"Speed : "<<c.speed()<<'\n';
    c.Accelerate();
    j++;
  }
  std::cout<<j<<" acceleration -> speed should be of 10"<<'\n';
  std::cout<<"Speed : "<<c.speed()<<'\n';
}

void race(std::vector <Character*>& runners){
  if (runners.size()==2){
    std::cout<<"Runner 1 : "<<runners[0]->WhatAmI()<<"|.\n";
    std::cout<<"Runner 2 : "<<runners[1]->WhatAmI()<<"|.\n";

    int first=0; 
    std::vector <int> distance;
    for(std::vector<Character*>::iterator it = runners.begin(); it != runners.end(); it++){
      distance.push_back(200);
      for (int i=0;i<=200;i++){
        (*it)->Break();
      }
    }
    std::string position(200,' ');
 
    while(first!=200){
      for(int i=0;i<runners.size();i++){
        position[200-distance[i]]=' ';
        distance[i]=distance[i]-runners[i]->speed();
        if (distance[i]>200){
          distance[i]=200;
        }
        std::cout << "I am a " << runners[i]->WhatAmI() << " with speed: " << runners[i]->speed() << std::endl;
        //met a jour la position du runner le plus proche de la ligne d'arrivé
        if(200-distance[i]>first){
          first=200-distance[i];
        }
        //accelerate the runner if possible
        runners[i]->Accelerate();
      }
      if (distance[0]==distance[1]){
        position[200-distance[0]]=';';
      } else{
        position[200-distance[0]]='.';
        position[200-distance[1]]=',';
        }
        
    }

    if (distance[0]==distance[1]){
      std::cout<<runners[0]->WhatAmI()<<" and "<<runners[1]->WhatAmI()<<" are ex aequo";
    } else{
      if (distance[0]<distance[1]){
        std::cout<<runners[0]->WhatAmI()<<" is the winner. "<<runners[1]->WhatAmI()<<" loses.";
      } else{
        std::cout<<runners[1]->WhatAmI()<<" is the winner. "<<runners[0]->WhatAmI()<<" loses.";
        }
      }
    } else{
      std::cout<<"Error"<<runners.size()<<" !\n";
    }
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
    test_acceleration_Yoshi(y);
    
    std::vector <Character*> runners;
    runners.push_back(new Mario());
    runners.push_back(new Yoshi());
    race(runners);
}
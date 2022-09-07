#include "hello_world.hpp" 
#include <iostream>
#include "std_msgs/msg/string.hpp"


HelloWorld::HelloWorld(): Node("HelloWorld")
{
  hello_world();
}

void HelloWorld::hello_world()
{
  int cont = 1;
  
  if (cont == 1)
  {
    std::cout<<"Primera iteracio"<<std::endl;
  }
  for (int cont2 = 1; cont2<10; cont2++)
  {
    std::cout<<"Hello World "<<cont2<<std::endl;
  }
  while(cont < 10){
    std::cout<<"Bye World "<<cont<<std::endl;
    cont++;
  }
}
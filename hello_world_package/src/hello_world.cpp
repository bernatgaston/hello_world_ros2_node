#include "hello_world.hpp" 
#include <iostream>


HelloWorld::HelloWorld(): Node("HelloWorld")
{
  hello_world();
}

void HelloWorld::hello_world()
{
  int cont = 1;
  while(cont < 40){
    std::cout<<"Hello World "<<cont<<std::endl;
    cont++;
    rclcpp::sleep_for(std::chrono::seconds(1));
  }
}
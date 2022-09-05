
#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

#include <rclcpp/rclcpp.hpp>

class HelloWorld: public rclcpp::Node
{
public:
    HelloWorld();
    void hello_world();

};
#endif //HELLO_WORLD_HPP
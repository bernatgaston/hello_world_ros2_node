
#include <rclcpp/rclcpp.hpp>
#include "hello_world.hpp"

int main(int argc, char** argv)
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<HelloWorld>());
	rclcpp::shutdown();
}
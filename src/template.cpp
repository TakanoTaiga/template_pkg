#include <memory>
#include "rclcpp/rclcpp.hpp"

using std::placeholders::_1;
using namespace std::chrono_literals;


#define pub_size 256

class template_class : public rclcpp::Node
{
  public:
  template_class() : Node("template")
  {

  }

private:
    
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<template_class>());
  rclcpp::shutdown();
  return 0;
}

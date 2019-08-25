#include "Car.hpp"
#include <iostream>
#include <cassert>

Car::Car() :
    velocity_(0)
{ }

void Car::turnLeft()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight()
{
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake()
{
    std::cout << __FUNCTION__ << std::endl;
    velocity_ = 0;
}

void Car::accelerate(int speed)
{
    std::cout << __FUNCTION__ << " " << speed << std::endl;
    assert(speed > 0);
    velocity_ += speed;
    if(velocity_ > 300) velocity_ = 300;
    std::cout << __FUNCTION__ << ": velocity_ " << velocity_ << std::endl;
}

#include "ElectricCar.hpp"
#include <iostream>

ElectricCar::ElectricCar(ElectricEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

ElectricCar::~ElectricCar()       {
    delete engine_; std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::turnLeft()      { std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::turnRight()     { std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::brake()         { std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::accelerate(int) { std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::charge()        { std::cout << __FUNCTION__ << std::endl; }
void ElectricCar::changeEngine(ElectricEngine* engine)
{
    delete engine_;
    engine_ = engine;
}


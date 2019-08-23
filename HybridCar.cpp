#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
    : petrolEngine_(petrolEng)
    , electricEngine_(electricEng)
{
    std::cout << __FUNCTION__ << std::endl;
}

HybridCar::~HybridCar()       { delete petrolEngine_; delete electricEngine_; std::cout << __FUNCTION__ << std::endl; }
void HybridCar::charge()        { std::cout << __FUNCTION__ << std::endl; }
void HybridCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }
 


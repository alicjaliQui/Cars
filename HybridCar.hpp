#include "Car.hpp"
#include "ElectricEngine.hpp"
#include "PetrolEngine.hpp"

class HybridCar : public Car
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();
    void charge();
    void refuel();

private:
    PetrolEngine* petrolEngine_;
    ElectricEngine* electricEngine_;
};


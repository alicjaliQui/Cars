#include "Car.hpp"
#include "ElectricEngine.hpp"

class ElectricCar : public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void charge();
    void changeEngine(ElectricEngine* engine);

private:
    ElectricEngine* engine_;
};


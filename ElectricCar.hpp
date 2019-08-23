#include "ElectricEngine.hpp"

class ElectricCar
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void turnLeft();
    void turnRight();
    void brake();
    void accelerate(int speed);
    void charge();
    void changeEngine(ElectricEngine* engine);

    ElectricEngine* engine_;
};


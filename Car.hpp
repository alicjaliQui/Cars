#pragma once

class Car
{
public:
    Car();
    virtual ~Car() = default;
    void turnLeft();
    void turnRight();
    void brake();
    void accelerate(int speed);

private:
    int velocity_;

};
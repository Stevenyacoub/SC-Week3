
//Motor.cpp
#include <iostream>

#include "Motor.h"

Motor::Motor(int _port)
    : port(_port)
{
}

void Motor::setSpeed(double speed)
{
    std::cout << "Motor @ port " << port << ": Setting speed to " << speed << std::endl;
}

// Wait for <amount> milliseconds
void Motor::wait(int amount)
{
    std::cout << "Waiting for " << (double) amount / 1000 << " seconds\n";
}

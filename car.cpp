#include "car.h"

#include <string>

Car::Car(const std::string &name, const unsigned int &maxSpeed):_name(name), _maxSpeed(maxSpeed)
{
    _wheels.emplace(WheelPosition::FRONT_RIGHT, Wheel{2.1, 6});
    _wheels.emplace(WheelPosition::FRONT_LEFT, Wheel{2.1, 6});
    _wheels.emplace(WheelPosition::REAR_LEFT, Wheel{2.4, 6});
    _wheels.emplace(WheelPosition::REAR_RIGHT, Wheel{2.4, 6});


}



std::string Car::name() const{
    return _name;

}

unsigned int Car::maxSpeed() const
{
    return _maxSpeed;
}


void Car::setMaxSpeed(unsigned int newMaxSpeed)
{
    _maxSpeed = newMaxSpeed;
}

std::operator << (std::ostream &stream, const Car &c){
    stream << "Name: " << c.name() << "MaxSpeed:" << c.maxSpeed();
    return stream;

}





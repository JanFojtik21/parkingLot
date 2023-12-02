#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
#include <unordered_map>



struct Wheel{
    float pressure;
    float threadDepth;

};

enum class WheelPosition{
    FRONT_LEFT = 0,
    FRONT_RIGHT,
    REAR_LEFT,
    REAR_RIGHT

};

class Car{

public:
    Car(const std::string &name, const unsigned int &maxSpeed);
    Car(const Car &car) = delete;
    auto operator = (const Car &car) = delete;


    std::string name() const;
    unsigned int maxSpeed() const;
    void setMaxSpeed(unsigned int newMaxSpeed);

    bool operator>(const Car &c) const{
        return this ->_maxSpeed > c._maxSpeed;
    }


    bool operator<(const Car &c) const{
        return !(*this > c);
    }

    Wheel operator[](const WheelPosition &pos){
        return _wheels[pos];
    }



private:
    std::string _name;
    unsigned int _maxSpeed;

    std::unordered_map<WheelPosition, Wheel> _wheels;


};





#endif // CAR_H

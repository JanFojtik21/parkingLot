#include <iostream>

#include "car.h"

using namespace std;


int main()
{

    Car AudiQ8 {"My Car", 220};
    Car HondaCivic {"Your car", 120};


    if (AudiQ8 > HondaCivic){
        std::cout << "Audi Q8 je rychlejsi \n" <<std::endl;

    }else{
        std::cout << "Beztak kecas" << std::endl;
    }


    cout << "Name :" << HondaCivic.name() << "Max Speed : " << HondaCivic.maxSpeed() << std::endl;
    AudiQ8[WheelPosition::FRONT_RIGHT].pressure = 0;

    cout << "Front right pressure:" << AudiQ8[WheelPosition::FRONT_RIGHT].pressure << std::endl;

    ParkingLot<Car> parkingHouse;
    parkingHouse.parkACar(std::make_shared<Car>("Skodovka", 210));
    parkingHouse.parkACar(std::make_shared<Car>("Audi", 210));
    parkingHouse.parkACar(std::make_shared<Car>("VW", 210));


    parkingHouseStrings.parkACar();






        return 0;
}

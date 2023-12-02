#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <list>


template <typename T>
class ParkingLot{


public:
    void parkACar(std::shared_ptr<T> car);
    void printParkedCar();

private:
    std::list<std::shared_ptr<T> _lots;
};




template <typename T>
void ParkingLot <T>::parkACar(std::shared_ptr<T> car)
{
    if(_lots.size() < size)
    _lots.push_back(car);

}

template <typename T>
void ParkingLot <T>::printParkedCars()
{
    for(const auto &car: _lots){
        std::cout<< car << stdendl;

}



#endif // PARKINGLOT_H

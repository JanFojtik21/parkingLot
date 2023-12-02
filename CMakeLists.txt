cmake_minimum_required(VERSION 3.5)

project(ParkingLots LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ParkingLots main.cpp
    car.h
    car.cpp
    parkinglot.h
    parking_lot_error.h parking_lot_error.cpp)

include(GNUInstallDirs)
install(TARGETS ParkingLots
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

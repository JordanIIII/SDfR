#include "vehicle.hpp"

//constructor
Vehicle::Vehicle(int seats, int doors, bool isPublic) {
    amountOfSeats = seats;
    amountOfDoors = doors;
    isPublicTransport = isPublic;
}

//printInfo()
void Vehicle::printInfo(){
    std::cout << "Vehicle!" << std::endl;
}
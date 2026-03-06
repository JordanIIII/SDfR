#include "bus.hpp" 

//constructor
Bus::Bus(int seats, int doors, bool isPublicTransport, int wheels, std::string license, float price) : Vehicle(seats, doors, isPublicTransport) {
    amountOfWheels = wheels;
    licensePlate = license;
    ticketPrice = price;
}

// printInfo()
void Bus::printInfo() {
    std::cout << "We are a bus!" << std::endl;
}


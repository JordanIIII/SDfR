#include <iostream>
#include "vehicle.hpp"

class Bus : public Vehicle {
    public:
    // Constructor
    Bus(int seats, int doors, bool isPublicTransport, int wheels, std::string license, float price);

    // printInfo()
    virtual void printInfo() override;

    void sellTicket();
    void requestStop();
    void announceNextStop();

    private:
    int amountOfWheels;
    std::string licensePlate;
    float ticketPrice;
};
#pragma once

#include <iostream>

class Vehicle {
    public:
    // Constructor
    Vehicle(int seats, int doors, bool isPublic);

    // printInfo()
    virtual void printInfo();


    int amountOfSeats;
    int amountOfDoors;
    bool isPublicTransport;

};
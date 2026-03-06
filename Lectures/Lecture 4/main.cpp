#include "vehicle.hpp"
#include "bus.hpp"

int main() {
    Vehicle vehicle = Vehicle(3, 2, true);
    Bus bus = Bus(40, 2, true, 5, "ABC-123", 2.50);
    vehicle.printInfo();
    bus.printInfo();

    return 0;
}
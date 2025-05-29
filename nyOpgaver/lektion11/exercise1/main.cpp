#include "vehicle.h"
#include <iostream>

int main() {
    Vehicle v(15.0, 40.0);
    std::cout << "Vehicle: " << v.to_string() << " Range: " << v.range() << std::endl;

    Car c("Toyota", "Corolla", 18.0, 45.0);
    std::cout << "Car: " << c.to_string() << " Range: " << c.range() << std::endl;

    HybridCar h("Toyota", "Prius", 20.0, 40.0, 8.8, 5.0);
    std::cout << "HybridCar: " << h.to_string() << " Range: " << h.range() << std::endl;

    return 0;
}
#include "vehicle.h"
  
Vehicle::Vehicle(double fuel_consumption, double fuel_capacity) : fuel_consumption_{fuel_consumption}, fuel_capacity_{fuel_capacity} {}

double Vehicle::range() {
  return fuel_capacity_*fuel_consumption_;
}

std::string Vehicle::to_string() {
  return "Fuel Consumption: " + std::to_string(fuel_consumption_) + ". Fuel Capacity: " + std::to_string(fuel_capacity_) + ".";
}

Car::Car(std::string make, std::string model, double fuel_consumption, double fuel_capacity) : Vehicle(fuel_consumption, fuel_capacity), make_{make}, model_{model} {}

std::string Car::to_string() {
  return Vehicle::to_string() + " Make: " + this->make_ + ", Model: "+ this->model_ + ".";
}

HybridCar::HybridCar(std::string make,
                     std::string model, 
                     double fuel_consumption, 
                     double fuel_capacity, 
                     double battery_capacity, 
                     double battery_effiency) 

                     : Car(make, model, fuel_consumption, fuel_capacity),
                     battery_capacity_{battery_capacity},
                     battery_effiency_{battery_effiency} {}


double HybridCar::range() {
  return Car::range() + (this->battery_effiency_*this->battery_capacity_);
}

std::string HybridCar::to_string() {
  return Car::to_string() + " Battery Capacity: " + std::to_string(this->battery_capacity_)+ ", Battery Effiency: "+ std::to_string(this->battery_effiency_)+ ".";
}

#pragma once
#include <string>

class Vehicle {
  private:
  double fuel_consumption_;
  double fuel_capacity_;

  public:
  Vehicle(double fuel_consumption, double fuel_capacity);
  double range();
  std::string to_string();
};

class Car : public Vehicle {
  private: 
  std::string make_;
  std::string model_;

  public:
  Car(std::string make, std::string model, double fuel_consumption, double fuel_capacity);
  std::string to_string();
};

class HybridCar : public Car {
  private:
  double battery_capacity_;
  double battery_effiency_;

  public:
  HybridCar(std::string make, std::string model, double fuel_consumption, double fuel_capacity, double battery_capacity, double battery_effiency);
  std::string to_string();
  double range();
};
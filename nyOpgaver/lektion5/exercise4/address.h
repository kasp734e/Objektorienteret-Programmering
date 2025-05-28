#pragma once
#include <string>

class Address {
private:
  std::string street;
  int number;
  int floor;
  std::string zipcode;
  std::string city;
  std::string country;

public:
  std::string to_string();
  Address& set_city(std::string city);
};
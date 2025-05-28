#include "address.h"

std::string Address::to_string() {
  return street + " " + std::to_string(number) + ", " +
       "Floor " + std::to_string(floor) + ", " +
       zipcode + " " + city + ", " + country;
}

Address& Address::set_city(std::string city) {
  this->city = city;
  return *this;
}
#include "person.h"

std::ostream& operator<<(std::ostream& os, const Person& person) {
  os << "Ssn: " << person.ssn_ << ", Name: " << person.name_ << ".";
  return os;
}

Person::Person(int ssn, std::string name) : ssn_{ssn}, name_{name} {}
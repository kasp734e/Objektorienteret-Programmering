#include "exercise1Person.h"

std::ostream& operator<<(std::ostream& os, const person& p) {
    return os << "Ssn:" << p.ssn_ << " Name:" << p.name_;
}
person::person(int ssn, std::string name) {
    this->ssn_ = ssn;
    this->name_ = name;
}
#include "person.h"

Person::Person(std::string name, int age) {
    this->age = age;
    this->name = name;
}

std::string Person::getName() {
    return this->name;
}

int Person::getAge() {
    return this->age;
}
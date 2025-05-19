#pragma once

#include "string"
class Person {
    private:
    std::string name;
    int age;

    public:
    Person(std::string name, int age);
    std::string getName();
    int getAge();
};
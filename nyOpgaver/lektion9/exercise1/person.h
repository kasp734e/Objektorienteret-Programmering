#pragma once
#include <iostream>

class Person {
friend std::ostream& operator<<(std::ostream& os, const Person& person);

public:
  Person(int ssn, std::string name);
private:
  int ssn_;
  std::string name_;
};
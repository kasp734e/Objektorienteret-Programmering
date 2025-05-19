#pragma once
#include <iostream>

class person {
    private: 
    int ssn_;
    std::string name_;

    public:
    person(int ssn, std::string name);
    friend std::ostream& operator<<(std::ostream& os, const person& p);
};
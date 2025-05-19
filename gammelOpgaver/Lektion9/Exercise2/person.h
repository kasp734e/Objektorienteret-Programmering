#pragma once
#include <iostream>
class person
{
    friend std::ostream &operator<<(std::ostream &, const person &);

    private:
        



    public:
        person(/* args */);
        ~person();
        person(int ssn, const std::string &name) : ssn_(ssn), name_(name) {}
    };

    person::person(/* args */)
    {
    }

    person::~person()
    {
}

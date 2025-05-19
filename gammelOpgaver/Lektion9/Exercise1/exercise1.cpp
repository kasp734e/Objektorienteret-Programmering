#include <iostream>
#include "exercise1Person.h"
#include <vector>

int main() {
    std::vector<person> people;
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));
    people.push_back(person(1, "John Doe"));

    std::vector<person>::iterator peopleEnd = people.end();

    for (std::vector<person>::iterator it = people.begin(); it != peopleEnd; it++) {
        std::cout << *it;
        if (std::next(it) != peopleEnd) {
            std::cout << std::endl;
        }
    }
}    
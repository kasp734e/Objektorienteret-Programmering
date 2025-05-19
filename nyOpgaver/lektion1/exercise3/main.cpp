#include "person.h"
#include "vector"
#include "iostream"

float averageAge(std::vector<Person*>* pVec) {
    float sum = 0;
    for (auto i : *pVec) {
        sum += i->getAge();
    }
    return sum / pVec->size();
}

float averageAge(Person* a, size_t size) {
    float sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += a[i].getAge();
    }
    return sum/size;
}

int main() {
    Person p1("Anders", 1);
    Person p2("Bo", 2);
    Person p3("Carl", 3);
    Person p4("Daniel", 4);
    Person p5("Emil", 5);

    std::vector<Person*> peopleV = {};
    Person peopleA[5] = {p1, p2, p3, p4, p5};

    peopleV.push_back(&p1);
    peopleV.push_back(&p2);
    peopleV.push_back(&p3);
    peopleV.push_back(&p4);
    peopleV.push_back(&p5);

    std::cout << averageAge(&peopleV) << std::endl;
    std::cout << averageAge(peopleA, 5) << std::endl;
}
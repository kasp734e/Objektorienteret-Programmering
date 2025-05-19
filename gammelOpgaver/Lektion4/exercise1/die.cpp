#include "die.h"

die::die() {
    value = 0;
}

int die::getValue() const {
    return this->value;
}

void die::roll() {
    this -> value = dist_(mt_);
    
    this -> outcomesCounterVector[value-1] = outcomesCounterVector[value-1] + 1;
}

int die::numberOfThrows() {
    int total = 0;
    for (auto a : outcomesCounterVector) {
        total = total + a;
    }
    return total;
}

std::vector<double> die::frequencies() {
    std::vector<double> returnVector = {0,0,0,0,0,0};

    for (size_t i = 0; i < 6; i++)
    {
        returnVector[i] = static_cast<double>(outcomesCounterVector[i])/die::numberOfThrows();
    }
    return returnVector;

}
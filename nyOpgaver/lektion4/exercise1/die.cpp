#include "die.h"



Die::Die() {}

void Die::roll() {
    int roll = this->dist_(this->mt_);
    this->value_ = roll;
    this->rolls_[roll-1]++;

}
int Die::get_value() const {
    return this->value_;
}

std::vector<double> Die::frequencies() {
    std::vector<double> freq = {0,0,0,0,0,0};
    int numberOfThrows = Die::number_of_throws();
    int index = 0;

    for (auto i : Die::rolls_) {
        if (numberOfThrows > 0) {
            freq[index] = static_cast<double>(i) / numberOfThrows;
        } else {
            freq[index] = 0.0;
        }
        index++;
    }
    return freq;
}

int Die::number_of_throws() {
    int count = 0;

    for (int i : Die::rolls_) {
        count += i;
    }
    return count;
}

void Die::log_dice_rolls() {
    for (auto i : Die::frequencies()) {
        std::cout << i << ", ";
    }
    std::cout << std::endl;
}

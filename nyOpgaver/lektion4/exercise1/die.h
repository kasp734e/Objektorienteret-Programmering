#pragma once
#include <random>
#include <vector>
#include <iostream>

class Die {
    private:
        int value_;
        static inline std::random_device rd_;
        static inline std::mt19937 mt_{rd_()};
        static inline std::uniform_int_distribution<int> dist_{1,6};

        static inline std::vector<int> rolls_ = {0,0,0,0,0,0};

    public:
        Die();
        void roll();
        int get_value() const;

        static std::vector<double> frequencies();
        static int number_of_throws();
        static void log_dice_rolls();

};
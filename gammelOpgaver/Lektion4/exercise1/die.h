#pragma once
#include <random>
#include <vector>

class die {
    public:
        die();
        void roll();
        [[nodiscard]] int getValue() const;

        static std::vector<double> frequencies();
        
        static inline std::vector<int> outcomesCounterVector = {0,0,0,0,0,0};    

        static int numberOfThrows();

    private:
        
        int value;


        static inline std::random_device rd_;
        static inline std::mt19937 mt_{rd_()};
        static inline std::uniform_int_distribution<int> dist_{1,6};

        
};
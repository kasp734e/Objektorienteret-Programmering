#include "die.h"
#include <iostream>




int main() {
    die terning;
    int i = 0;
    while (i<1000) {
        terning.roll();
        std::cout << terning.getValue();
        i++;
    }

    std::cout << std::endl << std::endl;

    std::cout << die::numberOfThrows();;

    std::cout << std::endl << std::endl;    
    for (auto a : die::frequencies()) {
        std::cout << a << std::endl;
    }


    return 0;
}


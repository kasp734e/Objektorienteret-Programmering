#include "complex.h"
#include "iostream"
int main() {
    const complex c_1(1, 1);
    complex c_2(2, 2);
    const complex c_3(3, 3);
    const complex c_4(4, 4);
    const complex c_5(5, 5);

    const complex c_sum = c_1.add_ret_copy(c_2);
    c_sum.write(std::cout);
    
    c_2.write(std::cout);
    c_2.add_to_this(c_1).add_to_this(c_3).add_to_this(c_4).add_to_this(c_5);
    c_2.write(std::cout);
}
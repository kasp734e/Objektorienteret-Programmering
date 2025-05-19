#pragma once
#include <stdio.h>
#include <iostream>
class complex {
    public:
        // Exercise 1 
        complex(const double x = 0, const double y = 0);
        complex add_ret_copy(const complex*) const;
        complex* add_to_this(const complex*);
        void write(std::ostream*) const;

        // Exercise 3
        complex& multiply(const complex& inp);
        double norm() const;

    private:
        double x_;
        double y_;
};
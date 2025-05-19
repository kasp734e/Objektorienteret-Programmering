#pragma once
#include <ostream>

class complex {
    public:
        complex(const double x = 0, const double y = 0);
        complex add_ret_copy(const complex* other) const;
        complex* add_to_this(const complex* a);
        void write(std::ostream* os) const;

    private:
        double x_;
        double y_;
};
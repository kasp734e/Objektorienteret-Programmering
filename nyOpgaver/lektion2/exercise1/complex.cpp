#include "complex.h"

complex::complex(const double x, const double y): x_(x), y_(y) {}

complex complex::add_ret_copy(const complex* other) const {
    return complex(this->x_ + other->x_, this->y_ + other->y_);
}

complex* complex::add_to_this(const complex* a) {
    this->x_ += a->x_;
    this->y_ += a->y_;
    return this;
}

void complex::write(std::ostream* os) const {
    if (os) { // Ensure the pointer is not null
        *os << this->x_ << ", " << this->y_ << std::endl;
    }
}
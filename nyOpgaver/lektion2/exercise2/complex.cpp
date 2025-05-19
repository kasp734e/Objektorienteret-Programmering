#include "complex.h"

complex::complex(const double x, const double y): x_(x), y_(y) {}

complex complex::add_ret_copy(const complex& other) const {
    return complex(this->x_ + other.x_, this->y_ + other.y_);
}

complex& complex::add_to_this(const complex& a) {
    this->x_ += a.x_;
    this->y_ += a.y_;
    return *this;
}

void complex::write(std::ostream& os) const {
    if (os) { 
        os << this->x_ << ", " << this->y_ << std::endl;
    }
}

complex& complex::multiply(const complex& inp) {
    double real = this->x_ * inp.x_ - this->y_ * inp.y_;
    double imag = this->x_ * inp.y_ + this->y_ * inp.x_;
    this->x_ = real;
    this->y_ = imag;
    return *this;
}

double complex::norm() const {
    return sqrt(this->x_*this->x_ + this->y_*this->y_);
}
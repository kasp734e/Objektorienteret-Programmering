#include "complex.h"
complex::complex(const double x, const double y) {
    this->x_ = x;
    this->y_ = y;
}

complex complex::add_ret_copy(const complex* input) const {
    complex nytComplex;
    nytComplex.x_ = input->x_ + this->x_;
    nytComplex.y_ = input->y_ + this->y_;
    return nytComplex;
}

complex* complex::add_to_this(const complex* input) {
    this->x_ += input->x_;
    this->y_ += input->y_;
    return this;
}

void complex::write(std::ostream* os) const {
    *os << "(" << this->x_ << ", " << this->y_ << ")";
}

// Exercise 3
complex& complex::multiply(const complex& inp) {
    double new_x = (this->x_ * inp.x_) - (this->y_ * inp.y_);
    double new_y = (this->x_ * inp.y_) + (this->y_ * inp.x_);
    this->x_ = new_x;
    this->y_ = new_y;
    return *this;
}

double complex::norm() const {
    return sqrt(std::pow(this->x_, 2) + std::pow(this->y_, 2));
}
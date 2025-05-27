
//Opgave 1 b)
#include "Fraction.h"
#include <stdexcept>
Fraction::Fraction(int nominator, int denominator) : nominator{nominator}, denominator{denominator} {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be 0");
    }
}
int Fraction::getNominator() const {
    return this->nominator;
}
int Fraction::getDenominator() const {
    return this->denominator;
}
bool Fraction::operator==(Fraction fraction) const {
        if (fraction.getDenominator()*this->nominator==fraction.getNominator()*this->denominator) {
            return true;
        } else {
            return false;
        }
    }

//Opgave 1 d)
std::ostream& operator<<(std::ostream& os, Fraction fraction) {
    os << fraction.getNominator() << "/" << fraction.getDenominator();
    return os;
}
//Opgave 1 f)

Fraction operator+(Fraction f1, Fraction f2) {
    Fraction newF(f1.nominator*f2.denominator+f2.nominator*f1.denominator, f1.denominator*f2.denominator);
    return newF;
}
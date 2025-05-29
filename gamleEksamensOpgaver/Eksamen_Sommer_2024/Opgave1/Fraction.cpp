
//Opgave 1 b)
#include "Fraction.h"

Fraction::Fraction(int nominator, int denominator) {
  if (denominator == 0) {
    throw std::invalid_argument("Denominator cannot be zero");
  } else {
    this->nominator = nominator;
    this->denominator = denominator;
  }
}

int Fraction::getNominator() const {
  return this->nominator;
}

int Fraction::getDenominator() const {
  return this->denominator;
}

bool Fraction::operator==(Fraction const fraction) const {
  if ((fraction.denominator*this->nominator)==(fraction.nominator*this->denominator)) {
    return true;
  } else {
    return false;
  }
}

//Opgave 1 d)

void operator<<(std::ostream &os, Fraction fraction) {
  os << std::to_string(fraction.nominator) << "/"<< std::to_string(fraction.denominator);
}

//Opgave 1 f)

Fraction operator+(Fraction frac1, Fraction frac2) {
  Fraction newFrac(((frac1.nominator*frac2.denominator)+(frac2.nominator*frac1.denominator)),(frac1.denominator*frac2.denominator));
  return newFrac;
}
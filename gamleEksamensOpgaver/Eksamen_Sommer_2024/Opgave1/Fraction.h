#pragma once
#include "stdexcept"
#include <ostream>
//Opgave 1 a )

class Fraction {

  //Opgave 1 d )
  friend void operator<<(std::ostream &os, Fraction fraction);

  //Opgave 1 f)
  friend Fraction operator+(Fraction frac1, Fraction frac2);

  private:
    int nominator;
    int denominator;

  public: 
    Fraction(int nominator = 1, int denominator = 1);
    int getNominator() const;
    int getDenominator() const;
    bool operator==(Fraction const fraction) const;
};



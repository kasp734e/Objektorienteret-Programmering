#pragma once
#include <ostream>

//Opgave 1 a )

class Fraction {
    friend Fraction operator+(Fraction f1, Fraction f2);
    friend std::ostream& operator<<(std::ostream& os, Fraction fraction);

    private:
    int nominator;
    int denominator;

    public:
    Fraction(int nominator = 1, int denominator = 1);
    int getNominator() const;
    int getDenominator() const;

    bool operator==(Fraction fraction) const;
};

//Opgave 1 d )

//Opgave 1 f)

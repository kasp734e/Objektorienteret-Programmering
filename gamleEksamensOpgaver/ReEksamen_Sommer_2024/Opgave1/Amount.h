#pragma once
#include "Currency.h"

//Opgave 1 b)
class Amount {
  friend bool operator==(Amount& left, Amount& right);
  private:
    double amount;
    Currency currency;

  public:
    Amount(double amount, Currency& currency);
    Amount operator+(Amount& other);
    std::string toString();
};
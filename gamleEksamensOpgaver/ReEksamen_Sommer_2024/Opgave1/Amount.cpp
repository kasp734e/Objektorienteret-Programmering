#include <cmath>
#include "Amount.h"
//Opgave 1c)
Amount::Amount(double amount, Currency& currency) : amount{amount}, currency{currency} {}


//Opgave 1 d)
std::string Amount::toString() {
  return std::to_string(this->amount) + " " + this->currency.getSymbol();
}

//Opgave 1 f)
Amount Amount::operator+(Amount& other) {
  Amount retur(0,this->currency);
  retur.amount += this->amount;

  double otherISTDCurrency = other.currency.toStandardCurrency(other.amount);
  double otherIThisCurrency = this->currency.fromStandardCurrency(otherISTDCurrency);
  retur.amount += otherIThisCurrency;
  return retur;

}

//Opgave 1 h)
bool operator==(Amount& left, Amount& right) {
  double rightInStd = left.currency.toStandardCurrency(left.amount);
  double leftInStd = right.currency.toStandardCurrency(right.amount);

  if (std::abs(rightInStd-leftInStd)<0.001) {
    return true;
  } else {
    return false;
  }
}
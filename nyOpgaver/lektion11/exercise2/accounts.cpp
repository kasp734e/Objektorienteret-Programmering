#include "accounts.h"


Account::Account(int balance) {
  if (balance <= 0) {
    throw std::invalid_argument("Balance must be greater than 0");
  } else {
    this->balance_ = balance;
  }
}

void Account::withdraw(int amount) {
  if ((this->balance_-amount)<0) {
    throw std::invalid_argument("Can't withdraw more than balance");
  } else {
    this->balance_ -= amount;
  }
}

void Account::deposit(int amount) {}
int Account::get_balance() {}

SavingsAccount::SavingsAccount(int balance, int withdraw_limit) 
  : Account(balance), withdraw_limit_{withdraw_limit} {}

  void SavingsAccount::withdraw(int amount) {
  if (amount > this->withdraw_limit_) {
    throw std::invalid_argument("Amount can't be bigger than the withdraw limit");
  } else {
    Account::withdraw(amount);
  }
}


CreditAccount::CreditAccount(int balance, int credit)
    : Account(validate_credit_balance(balance, credit)), credit_{credit} {}

void CreditAccount::withdraw(int amount) {
  if (amount > (this->balance_+this->credit_)) {
    balance_ -= amount;
  } else {
    throw std::invalid_argument("Balance and credit too low");
  }
}


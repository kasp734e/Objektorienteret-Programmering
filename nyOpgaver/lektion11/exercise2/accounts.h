#pragma once
#include <stdexcept>

class Account {
  protected:
    int balance_;

  public:
    static int validate_credit_balance(int balance, int credit) {
    if (balance <= 0)
        throw std::invalid_argument("Balance must be greater than 0");
    if ((balance + credit) < 0)
        throw std::invalid_argument("Credit + balance needs to be more than 0");
    return balance;
    }
    void withdraw(int amount);
    void deposit(int amount);
    int get_balance();

    Account(int balance);
};

class SavingsAccount : public Account {
  private:
    int withdraw_limit_;

  public:
    void withdraw(int amount);
    SavingsAccount(int balance, int withdraw_limit);
};

class CreditAccount : public Account {
  private:
    int credit_;

  public:
    void withdraw(int amount);
    CreditAccount(int balance, int credit);
};
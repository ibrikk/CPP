#include <iostream>
using namespace std;

class Player
{
  // attributes
public:
  string name;
  int health;
  int xp;

  // methods
  void talk(string);
  bool is_dead();
};

int main()
{
  Player frank;
  Player hero;

  Player players[] = {frank, hero};

  Player *enemy = {nullptr};
  enemy = new Player;
  (*enemy).name("Enemy");
  (*enemy).health = 100;
  enemy->xp = 15;

  delete enemy;

/// Separating Specification from Inplementation -- INCLUDE GUARDS - Account.h file
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
  // Account class declaration
  class Account
  {
  private:
    double balance;

  public:
    void set_balance(double bal);
    double get_balance();
  }
#endif

// Account.cpp file
#include "Account.h"

  void Account::set_balance(double_bal)
  {
    balance = bal;
  }
  double Account::get_balance()
  {
    return balance;
  }

  return 0;
}

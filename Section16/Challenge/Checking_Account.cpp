#include "Checking_Account.h"
#include "I_Printable.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

 bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    return Account::withdraw(amount);
}

 void Checking_Account::print(std::ostream &os) const 
{
  os<<"Checking Account";
}

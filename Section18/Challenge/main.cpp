#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    unique_ptr<Account> ptr_account;
    unique_ptr<Account> ptr_account2;

   try
   {
      ptr_account = make_unique<Savings_Account>("Temel",-100);
   }
   catch(const IllegalBalanceException &ex)
   {
     cerr<<ex.what();
   }

   try
   {
     ptr_account2 = make_unique<Savings_Account>("Temel",500);
     ptr_account2->deposit(1000);
     ptr_account2->withdraw(1000);
     ptr_account2->withdraw(1000);

   }
   catch(const InsufficientFundsException &ex)
   {
    cerr<<ex.what();
   }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

#ifndef ACCOUNT_N
#define ACCOUNT_N

#include <vector>
#include "Money.h"

class Account
{

friend class Money;

private:


    int initialBalance=0;

    bool internalFlag = 0;

public:
    
    std::vector <Money> depo;
    std::vector <Money> withdrawl;
    
    Account(const int &allCents);

    //See cpp for notes on makeDeposit
    int getInitial();
    bool getFlag();
    
    void makeDeposit(Money const m);
    void makeWithdrawl(Money const m);
    Money getBalance(int initialBalance, bool internalFlag);
    
    friend std::ostream &operator<<(std::ostream &out, const Account &account);

    //int makeWithdrawl(std::vector<Money> money);

    /*friend std::ostream &operator<<(std::ostream &out, const Account &Account);*/
    
    //This function is just here to test the vectors and make sure the right values are in them. We can delete it later

};

#endif


#include <iostream>
#include <vector>
#include <numeric>
#include "Account.h"
#include "Money.h"

using namespace std;

Account::Account(const int &allCents): initialBalance{allCents}
{
    initialBalance = allCents;
}

int Account::getInitial()
{
    return initialBalance;
}

bool Account::getFlag()
{
    return internalFlag;
}

void Account::makeDeposit (Money const m)
{
    internalFlag = 1;
    
    depo.vector::push_back(m);
}

void Account::makeWithdrawl (Money const m)
{
    internalFlag = 1;
    
    withdrawl.vector::push_back(m);
}

Money Account::getBalance (int initialBalance, bool internalFlag)
{
    Money m(initialBalance/100, initialBalance%100);
    
    if (internalFlag=1)
    {
        auto depoSum = std::accumulate(depo.begin(), depo.end(), m);
    
        auto withdrawlSum = std::accumulate(withdrawl.begin(), withdrawl.end(), m);
        m = depoSum - withdrawlSum + m;
        
        return m;
    }

    else
    {
        return m;
    }
}

std::ostream &operator<< (std::ostream &out, const Account &account)
{
    out << "$" << account.initialBalance * 0.01 << std::endl;
}


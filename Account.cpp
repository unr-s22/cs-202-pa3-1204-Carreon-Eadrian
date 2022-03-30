#include <iostream>
#include <vector>
#include "Account.h"
#include "Money.h"

using namespace std;

Account::Account(const int &allCents): initialBalance{allCents}
{
	initialBalance = allCents;
}

int makeDeposit (std::vector<Money> money)
{
	internalFlag = 1;
	money.makeDeposit = initialBalance + Account(allCents);
}

int makeWithdrawl (std::vector<Money> money)
{
	internalFlag = 1;
	money.makeWithdrawl = initialBalance - Account(allCents);
}

if (internalFlag == 1)
{
	return initialBalance;
}
else
{
	return initialBalance;
}

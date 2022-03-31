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
	
	Account(const int &allCents);

	//See cpp for notes on makeDeposit
	Money makeDeposit(Money const m);
	
	friend std::ostream &operator<<(std::ostream &out, const Account &account);

	//int makeWithdrawl(std::vector<Money> money);

};

#endif

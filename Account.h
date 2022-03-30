#ifndef ACCOUNT_N
#define ACCOUNT_N

#include <vector>
#include "Money.h"

class Account
{

friend class Money;

private:

	int initialBalance;
	bool internalFlag = 0;

public:
	
	Account(const int &allCents);

	friend std::ostream &operator<<(std::ostream &out, const Account &Account);

	int makeDeposit(std::vector<Money> money);

	int makeWithdrawl(std::vector<Money> money);

};

#endif

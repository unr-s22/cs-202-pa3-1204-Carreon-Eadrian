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
	void makeDeposit(Money const m);
	void makeWithdrawl(Money const m);
	Money getBalance(int initialBalance, bool internalFlag);

	//int makeWithdrawl(std::vector<Money> money);

	friend std::ostream &operator<<(std::ostream &out, const Account &Account);
	
	void printInterface(){}

};

#endif

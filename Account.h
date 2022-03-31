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
	
	friend std::ostream &operator<<(std::ostream &out, const Account &account);

	//int makeWithdrawl(std::vector<Money> money);

	friend std::ostream &operator<<(std::ostream &out, const Account &Account);
	
	//This function is just here to test the vectors and make sure the right values are in them. We can delete it later
	void printVector()
	{
		std::cout << depo[0] << std::endl;
		std::cout << depo[1] << std::endl;
		std::cout << depo[2] << std::endl;
		
		std::cout << withdrawl[0] << std::endl;
		std::cout << withdrawl[1] << std::endl;
		//std::cout << withdrawl[2] << std::endl;
	}

	void printInterface(){}

};

#endif

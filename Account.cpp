#include <iostream>
#include <vector>
#include "Account.h"
#include "Money.h"

using namespace std;

Account::Account(const int &allCents): initialBalance{allCents}
{
	initialBalance = allCents;
}

void Account::makeDeposit (Money const m)
{
	internalFlag = 1;
	
	std::vector <Money> depo;
	depo.push_back(m);
	
	std::cout << depo[0] << std::endl;
	std::cout << depo[1] << std::endl;
	std::cout << depo[2] << std::endl;
}


std::ostream &operator<< (std::ostream &out, const Account &account)
{
	out << "$" << account.initialBalance * 0.01 << std::endl;
}

//I haven't changed these functions below. I decided to work on one and, if that worked, use it as a template for the others. I only commented them out so that they wouldn't change anything while I as working on the makeDeposit function

/*int makeWithdrawl (std::vector<Money> money)
=======
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
<<<<<<< HEAD
}*/



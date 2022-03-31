#include <iostream>
#include <vector>
#include "Account.h"
#include "Money.h"

using namespace std;

Account::Account(const int &allCents): initialBalance{allCents}
{
	initialBalance = allCents;
}

/*Changed some things for makeDeposit. Added Account:: so that it can access private variables. Changed it to Money type for now but I'm not sure what the return type is supposed to be at the moment. Here are some other things I'm still not sure about:

1.) How to get the deposit amount in from main, since the input is type Money. It might have to pass through Money first but I'm not sure how to do that at the moment :(

2.)  How to save multiple values in the vector. I'm not very well-versed in vector commands so I'm not sure if push_back will store each new value in a new slot in the vector every time the function is called, or if it will overwright it each time

3.) How to pass the vectors to another function for it to add the deposits and then adjust the initial balance accordingly

*/
Money Account::makeDeposit (Money const m)
{
	internalFlag = 1;
	
	std::vector <Money> depo;
	depo.push_back(m);
	return m;
}


//<< overload for account. Right now it only prints the initial balance but we can add to it when we're able to test more things
std::ostream &operator<< (std::ostream &out, const Account &account)
{
	out << "$" << account.initialBalance * 0.01 << std::endl;
}

//I haven't changed these functions below. I decided to work on one and, if that worked, use it as a template for the others. I only commented them out so that they wouldn't change anything while I as working on the makeDeposit function

/*int makeWithdrawl (std::vector<Money> money)
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
}*/

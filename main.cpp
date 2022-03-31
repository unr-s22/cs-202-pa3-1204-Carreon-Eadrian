//We should put our names here eventually

#include <iostream>
#include "Money.h"
#include "Account.h"

//we got dis!
int main()
{

	Money check1 (25, 67);
	Money check2 (45, 21);
	Money check3 (10, 45);
	
	//prints initial balance for now
	Account account(check1.getCents());
	
	std::cout << "These are tests! These three values are what is being stored in the depo vector" << std::endl;
	account.makeDeposit(check1);
	account.makeDeposit(check2);
	account.makeDeposit(check3);
	
	account.printVector();
	
	std::cout << "This is the initial balance" << std::endl;
	std::cout << account << std::endl;
	
	std::cout << "This is some overload checks currently check1 and check2" << std::endl;
	//checks for money operator overloads
	std::cout << check1+check2 << std::endl;
	std::cout << check1-check2 << std::endl;
	
	//It says we need code that proves our relational operator overloads worked but I don't really know what to do for that. Like... is it related to the functionality at all or can we literally just print anything? I dunno
	if (check1 < check2)
	{
		std::cout << "Hi" << std::endl;
	}


	return 0;
	
}

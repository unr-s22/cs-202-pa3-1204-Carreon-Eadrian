//Evie Nivera and Eadrian Carreon
//Programming Assignment 03

#include <iostream>
#include "Money.h"
#include "Account.h"

//we got dis!
int main()
{
	Money startingBalance(300, 23);
	Money depositOne (200, 00);
	Money depositTwo (300, 24);
	Money depositThree (501, 22);
	Money withdrawlOne (300, 10);
	Money withdrawlTwo (201, 34);
	//Money withdrawlThree (12, 01);
	
	//prints initial balance for now
	Account account(startingBalance.getCents());
	
	std::cout << "These are tests! These values are what is being stored in the depo vector" << std::endl;
	account.makeDeposit(depositOne);
	account.makeDeposit(depositTwo);
	account.makeDeposit(depositThree);
	
	account.makeWithdrawl(withdrawlOne);
	account.makeWithdrawl(withdrawlTwo);
	//account.makeWithdrawl(withdrawlThree);
	
	//can be deleted with the printVector function later
	account.printVector();
	
	std::cout << "This is the initial balance" << std::endl;
	std::cout << account << std::endl;
	
	//It says we need code that proves our relational operator overloads worked but I don't really know what to do for that. Like... is it related to the functionality at all or can we literally just print anything? I dunno
	if (depositOne < depositTwo)
	{
		std::cout << "Deposit one < Deposit two" << std::endl;
	}
	else
	{
		std::cout << "Deposit one is not smaller than Deposite two" << std::endl;
	}
	
	if (depositThree > depositTwo)
	{
		std::cout << "Deposit three > Deposit two" << std::endl;
	}
	else
	{
		std::cout << "Deposit three is not larger than Deposit two" << std::endl;
	}
	
	if (depositOne <= withdrawlOne)
	{	
		std::cout << "Deposit one <= withdrawal one" << std::endl;
	}
	else 
	{
		std::cout << "Deposit one is greater than withdrawal one" << std::endl;
	}
	
	if (depositTwo >= withdrawlTwo)
	{
		std::cout << "Deposit two >= withdrawal two" << std::endl;
	}
	else
	{
		std::cout << "Deposit two is less than withdrawal two" << std::endl;
	}
	
	if (depositOne == depositThree)
	{
		std::cout << "Deposit one == Deposit three" << std::endl;
	}
	else
	{
		std::cout << "The deposits are not equal" << std::endl;
	}

	if (withdrawlOne != withdrawlTwo)
	{
		std::cout << "Withdrawal one != Withdrawal two" << std::endl;
	}
	else
	{
		std::cout << "The withdrawals are equal" << std::endl;
	}

	return 0;
	
}

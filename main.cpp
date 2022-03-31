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
	
	std::cout << "This is some overload checks currently check1 and check2" << std::endl;
	//checks for money operator overloads
	std::cout << depositOne+depositTwo << std::endl;
	std::cout << depositOne-depositTwo << std::endl;
	
	//Trying to print the Account interface
	
	std::cout << "Account Details" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Current Balance:" << account << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Number of Deposits: 3" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "(1) " << depositOne << std::endl;
	std::cout << "(2) " << depositTwo << std::endl;
	std::cout << "(3) " << depositThree << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "Number of Withdrawls: 1" << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << "(1) " << std::endl;
	
	









	//It says we need code that proves our relational operator overloads worked but I don't really know what to do for that. Like... is it related to the functionality at all or can we literally just print anything? I dunno
	if (depositOne < depositTwo)
	{
		std::cout << "Hi" << std::endl;
	}


	return 0;
	
}

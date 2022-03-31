//Evie Nivera and Eadrian Carreon
//Programming Assignment 03

#include <iostream>
#include "Money.h"
#include "Account.h"

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
	
	account.printInterface();

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
	std::cout << "(1) " << account.getBalance(startingBalance.getCents(), flag) << std::endl;

	std::cout << "This is the initial balance" << std::endl;
	std::cout << account << std::endl;
	
	std::cout << "This is some overload checks currently check1 and check2" << std::endl;
	//checks for money operator overloads
	std::cout << depositOne+depositTwo << std::endl;
	std::cout << depositOne-depositTwo << std::endl;
	
	//Relational operation overload proofs
	std::cout << std::endl;
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

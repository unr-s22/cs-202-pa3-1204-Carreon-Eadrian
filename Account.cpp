#include <iostream>
#include <vector>
#include <numeric>
#include "Account.h"
#include "Money.h"

using namespace std;

Account::Account(const int &allCents): initialBalance{allCents}
{
	initialBalance = allCents;
}

int Account::getInitial()
{
    return initialBalance;
}

bool Account::getFlag()
{
    return internalFlag;
}


void Account::makeDeposit (Money const m)
{
	internalFlag = 1;
	
	depo.vector::push_back(m);
}

void Account::makeWithdrawl (Money const m)
{
	internalFlag = 1;
	
	withdrawl.vector::push_back(m);
}

void Account::printInterface()
{

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
		
}

Money Account::getBalance (int initialBalance, bool internalFlag)
{
    Money m(initialBalance/100, initialBalance%100);
    
    if (internalFlag=1)
    {
        auto depoSum = std::accumulate(depo.begin(), depo.end(), m);
    
        auto withdrawlSum = std::accumulate(withdrawl.begin(), withdrawl.end(), m);
        m = depoSum - withdrawlSum + m;
        
        return m;
    }

    else
    {
        return m;
    }
}

std::ostream &operator<< (std::ostream &out, const Account &account)
{
    out << "$" << account.initialBalance * 0.01 << std::endl;
}


std::ostream &operator<< (std::ostream &out, const Account &account)
{
	out << "$" << account.initialBalance * 0.01 << std::endl;
}

//I haven't changed these functions below. I decided to work on one and, if that worked, use it as a template for the others. I only commented them out so that they wouldn't change anything while I as working on the makeDeposit function

/*int makeWithdrawl (std::vector<Money> money)


int makeDeposit (std::vector<Money> money)
{


	money.makeDeposit = initialBalance + Account(allCents);


}

void makeDeposit()
{
	account(check1.getCents);
	secondDeposit = check1 + check2;
	thirdDeposit = secondDeposit + check3;

}


int makeWithdrawl (std::vector<Money> money)

{
	internalFlag = 1;
	money.makeWithdrawl = initialBalance - Account(allCents);
}


/*if (internalFlag == 1)
{
	return initialBalance;
}
else
{
	return initialBalance;
}*/



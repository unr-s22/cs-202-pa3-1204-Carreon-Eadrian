#include <iostream>
#include <iomanip>
#include "Money.h"

//converts dollars into pure cents
Money::Money(const int &nDollars, const int &nCents): dollars{nDollars}, cents{nCents}
{

	allCents = (dollars*100) + cents;
}

//getter for cents/allCents
int Money::getCents()
{
	return allCents;
}

//+ and - overloads
Money operator + (Money const &test1, Money const &test2)
{
	Money amount(0,0);
	amount.allCents = test1.allCents + test2.allCents;
	return amount;
}

Money operator - (Money const &test1, Money const &test2)
{
	Money amount(0,0);
	amount.allCents = test1.allCents - test2.allCents;
	return amount;
}

//relational operator overloads
bool operator<(Money const &test1, Money const &test2)
{
	return test1.allCents < test2.allCents;
}

bool operator>(Money const &test1, Money const &test2)
{
	return test1.allCents > test2.allCents;
}

bool operator<=(Money const &test1, Money const &test2)
{
	return test1.allCents <= test2.allCents;
}

bool operator>=(Money const &test1, Money const &test2)
{
	return test1.allCents >= test2.allCents;
}

bool operator!=(Money const &test1, Money const &test2)
{
	return test1.allCents != test2.allCents;
}

bool operator==(Money const &test1, Money const &test2)
{
	return test1.allCents == test2.allCents;
}

std::ostream &operator<< (std::ostream &out, const Money &money)
{
	out << "$" << std::setprecision(2) << std::fixed << money.allCents * 0.01;
}



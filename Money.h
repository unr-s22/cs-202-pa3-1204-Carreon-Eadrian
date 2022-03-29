#ifndef MONEY_N
#define MONEY_N

class Money
{
private:
	int dollars =0, cents =0, allCents;
	
public:
	Money(const int &nDollars, const int &nCents);
	
	friend Money operator+ (Money const &test1, Money const &test2);
	friend Money operator- (Money const &test1, Money const &test2);

	friend bool operator<(Money const &test1, Money const &test2);
	friend bool operator>(Money const &test1, Money const &test2);
	friend bool operator<=(Money const &test1, Money const &test2);
	friend bool operator>=(Money const &test1, Money const &test2);
	friend bool operator!=(Money const &test1, Money const &test2);
	friend bool operator==(Money const &test1, Money const &test2);
	
	
	friend std::ostream &operator<< (std::ostream &out, const Money &money);
	/*{
		out << "$" << money.allCents * 0.01;
	}*/

};

#endif

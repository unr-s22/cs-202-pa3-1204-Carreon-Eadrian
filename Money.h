#ifndef MONEY_N
#define MONEY_N
#include <string>


class Money
{
private:
    int dollars =0, cents =0, allCents=0;
    
public:
    friend class Account;

    Money(const int &nDollars, const int &nCents);
    
    //getter for allCents so that account can access it in main
    int getCents();
    
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


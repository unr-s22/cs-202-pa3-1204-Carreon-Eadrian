#include <iostream>
#include "Money.h"


int main()
{

	Money check1 (25, 67);
	Money check2 (45, 21);
	
	std::cout << check1+check2 << std::endl;
	std::cout << check1-check2 << std::endl;
	
	if (check1 < check2)
	{
		std::cout << "Hi" << std::endl;
	}


	return 0;
	
}

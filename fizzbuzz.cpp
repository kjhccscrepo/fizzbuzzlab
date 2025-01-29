// fizzbuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
	int usernum;

	std::cin >> usernum;

	double divby3 = fmod(usernum, 3);
	double divby5 = fmod(usernum, 5);

	if (divby3 == 0 && divby5 == 0) {
		std::cout << "FizzBuzz";
	
	}
	else if (divby3 == 0) {
		std::cout << "Fizz";
	}
	else if (divby5 == 0) {
		std::cout << "Buzz";
	}
	else {
		std::cout << usernum;
	}
	return 0;
}

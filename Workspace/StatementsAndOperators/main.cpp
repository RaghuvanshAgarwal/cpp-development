// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
	Write a program that asks the user to enter the following:
	An integer representing the number of cents 
	
	You may assume that the number of cents entered is greater than or equal to zero
	
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
	std::cout << "Welcome to change shop: " << std::endl;
	
	std::cout << "Enter an amount in cents: ";
	int cents_cr {0};
	std::cin >> cents_cr;
	
	std::cout << "Please collect your change: " << std::endl;
	
	std::cout << "Dollars: " << cents_cr / 100 << std::endl;
	cents_cr %= 100;
	
	std::cout << "Quatars: " << cents_cr / 25 << std::endl;
	cents_cr %= 25;
	
	std::cout << "Dimes  : " << cents_cr / 10 << std::endl;
	cents_cr %= 10;
	
	std::cout << "Nickels: " << cents_cr / 5 << std::endl;
	cents_cr %= 5;
	
	std::cout << "Pennies: " << cents_cr << std::endl;
}



#include <iostream>

int main(){	
	std::cout << "What is your favourite number between 1-100: ";
	int user_fav_number;
	std::cin >> user_fav_number;
	std::cout << "Amazing!! That My Favourite Number Also" << std::endl;
	std::cout << "No! Really " << user_fav_number << " is my favourite number" << std::endl;
	return 0;
}

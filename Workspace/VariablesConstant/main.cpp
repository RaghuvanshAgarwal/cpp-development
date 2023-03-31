#include <iostream>

int main(){
	const float SMALL_ROOM_COST {25.0};
	const float LARGE_ROOM_COST {35.0};
	const float SALES_TAX_PERCENTAGE {0.06};
	const int ESTIMATION_EXPIRY {30};
	
	
	std::cout << "Estimate for carpet cleaning service\n";
	
	std::cout << "Number of small rooms: ";
	int sm_room_count {0};
	std::cin >> sm_room_count;
	
	std::cout << "Number of large rooms: ";
	int lr_room_count {0};
	std::cin >> lr_room_count;
	
	std::cout << "Price per small room $" << SMALL_ROOM_COST << std::endl;
	std::cout << "Price per large room $" << LARGE_ROOM_COST << std::endl;
	
	float subtotal = (sm_room_count * SMALL_ROOM_COST) + (lr_room_count * LARGE_ROOM_COST);
	float sales_tax  = subtotal * SALES_TAX_PERCENTAGE;
	
	float total_estimation = subtotal + sales_tax;
	
	std::cout << "Cost: $" << subtotal << std::endl;
	std::cout << "Tax: $" << sales_tax << std::endl;
	std::cout << "==========" << std::endl;
	std::cout << "Total Estimate: $" << total_estimation << std::endl;
	std::cout << "This estimation is valid for " << ESTIMATION_EXPIRY << " days" << std::endl;
}

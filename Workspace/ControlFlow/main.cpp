// Section 9
// Challenge
/*
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers(0);
    bool should_continue{ true };

    while(should_continue) {
        std::cout << "Operations List: " << std::endl;
        std::cout << "P : Print List" << std::endl;
        std::cout << "A : Add number to List" << std::endl;
        std::cout << "M : Print Mean Number in List" << std::endl;
        std::cout << "L : Print Largest Number in List" << std::endl;
        std::cout << "S : Print Smallest Number in List" << std::endl;
        std::cout << "Q : Query for a number in List" << std::endl;
        std::cout << "C : Clear the List" << std::endl;
        std::cout << "E : Exit" << std::endl;

        char user_input;
        std::cin >> user_input;

        if(user_input == 'P' || user_input == 'p') {
            if(numbers.size() > 0) {
                std::cout << "[ ";
                for(const int& i : numbers) {
                    std::cout << i << " ";
                }
                std::cout << "]" << std::endl;
            } else {
                std::cout << "[] - list is empty" << std::endl;
            }
            std::cout << std::endl << std::endl;
            continue;
        }

        if(user_input == 'A' || user_input == 'a') {

            std::cout << "Enter number to add to list: ";
            int num{ 0 };
            std::cin >> num;
                
            int index {-1};
            for(int i = 0; i < numbers.size(); i++){
                if(numbers[i] == num){
                    index = i;
                    break;
                }
            }
            if(index == -1){
                numbers.push_back(num);
                std::cout << num << " added" << std::endl;
            }else{
                std::cout << "Duplicate Entry is not allowed" << std::endl;
            }
            std::cout << std::endl << std::endl;
            continue;
        }

        if(user_input == 'M' || user_input == 'm') {

            if(numbers.size() > 0) {
                int sum_of_list{ 0 };
                for(const int& i : numbers) {
                    sum_of_list += i;
                }
                int mean{ sum_of_list / (int)numbers.size() };
                std::cout << "Mean of the List: " << mean << std::endl;
            } else {
                std::cout << "Unable to determine the mean - no data" << std::endl;
            }

            std::cout << std::endl << std::endl;
            continue;
        }

        if(user_input == 'S' || user_input == 's') {

            if(numbers.size() > 0) {
                int smallest_number{ INT_MAX };

                for(const int& i : numbers) {
                    if(i < smallest_number) {
                        smallest_number = i;
                    }
                }

                std::cout << "Smallest number in list is: " << smallest_number << std::endl;
            } else {
                std::cout << "No Data is available -- empty list" << std::endl;
            }

            std::cout << std::endl << std::endl;
            continue;
        }

        if(user_input == 'L' || user_input == 'l') {
            
             if(numbers.size() > 0) {
                int largest_number{ INT_MIN };

                for(const int& i : numbers) {
                    if(i > largest_number) {
                        largest_number = i;
                    }
                }

                std::cout << "Largest number in list is: " << largest_number << std::endl;
            } else {
                std::cout << "No Data is available -- empty list" << std::endl;
            }
            
            std::cout << std::endl << std::endl;
            continue;
        }
        
        if(user_input == 'Q' || user_input == 'q') {
            
            if(numbers.size() == 0){
                std::cout << "No number to query - empty list" << std::endl;
            }else{
                std::cout << "Enter a number to query: ";
                int number_to_query {0};
                std::cin >> number_to_query;
                
                int index {-1};
                for(int i = 0; i < numbers.size(); i++){
                    if(numbers[i] == number_to_query){
                        index = i;
                        break;
                    }
                }
                if(index == -1){
                    std::cout << "Number not found in the list" <<std::endl;
                }else{
                    std::cout << "Number exsist in the list at index " << index << std::endl;
                }
            }
            
            std::cout << std::endl << std::endl;
            continue;
        }
        
        if(user_input == 'C' || user_input == 'c') {
            
            std::cout << "Do you really want to clear the list [Y/N]: ";
            char confirmation;
            std::cin >> confirmation;
            
            if(confirmation == 'Y' || confirmation == 'y'){
                std::cout << "Clearning the List" << std::endl;
                numbers.clear();
            }else{
                std::cout << "Aborting Clearing Request!" <<std::endl;
            }
            
            std::cout << std::endl << std::endl;
            continue;
        }

        if(user_input == 'E' || user_input == 'e') {
            should_continue = false;
            std::cout << std::endl << std::endl;
            continue;
        }
    }
}

#include <iostream>

bool accept()
{
    std::cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    std::cin >> answer; // the operator >> means ("get from") is used for input, cin is the standard input stream.
    // the type of the right-hand operator of >> determines what input is accepted, in this case is char

    if (answer == 'y') return true;
    return false;
}

int main()
{
    if (accept() == true)
    {
	std::cout << "Continues\n";
    } 
    else 
    {
	std::cout << "Stop\n";
    }
    return 0;
}

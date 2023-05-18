#include <iostream>

bool accept2()
{
    std::cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    std::cin >> answer; // the operator >> means ("get from") is used for input, cin is the standard input stream.
    // the type of the right-hand operator of >> determines what input is accepted, in this case is char

    switch (answer)
    {
	case 'y':
	    return true;
	case 'n':
	    return false;
	default:
	    std::cout << "I'll take that for a no.\n";
	    return false;
    }
}

int main()
{
    if (accept2() == true)
    {
	std::cout << "Continues\n";
    } 
    else 
    {
	std::cout << "Stop\n";
    }
    return 0;
}

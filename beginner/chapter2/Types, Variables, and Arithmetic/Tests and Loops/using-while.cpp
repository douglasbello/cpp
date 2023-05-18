#include <iostream>

bool accept2()
{
    int tries = 1;
    while (tries < 4)
    {
	std::cout << "Do you want to proceed (y or n)?\n";
	char answer = 0;
	std::cin >> answer;

	switch (answer) 
	{
	    case 'y':
		return true;
	    case 'n':
		return false;
	    default:
		std::cout << "Sorry, I don't understand that.\n";
		++tries;
	}
    }
    std::cout << "I'll take that for a no.\n";
    return false;
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

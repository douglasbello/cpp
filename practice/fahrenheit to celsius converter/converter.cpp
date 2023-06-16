#include <stdio.h>
#include <iostream>

double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);


int main()
{
	puts("If you want to convert fahrenheit to celsius, insert F, otherwise, insert C.");
	char response = getchar();

	if (response == 'F')
	{
		double degree;
		puts("Enter the value to convert: ");
		std::cin >> degree;
		std::cout << "Converting " << degree << " fahrenheit to celsius, the result is: " << fahrenheitToCelsius(degree) << std::endl;
	}
	else if (response == 'C')
	{
		puts("Enter the value to convert: ");
		double degree;
		std::cin >> degree;
		std::cout << "Converting " << degree << " celsius to fahrenhiet, the result is: " << celsiusToFahrenheit(degree) << std::endl;
	}
	else
	{
		puts("Incorrect caracter.");
	}

	return EXIT_SUCCESS;
}

double fahrenheitToCelsius(double fahrenheit)
{
	return (fahrenheit - 32) / 1.8;
}

double celsiusToFahrenheit(double celsius)
{
	return (celsius * 1.8) + 32;
}
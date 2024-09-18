#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double number1;
	double number2;
	char mathematical_operator;

	std::cout << "¬ведите первое число: "; std::cin >> number1;
	std::cout << "¬ведите действие (+, -, *, /, %): "; std::cin >> mathematical_operator;
	std::cout << "¬ведите второе число: "; std::cin >> number2;

	if (mathematical_operator == '+') {
		std::cout << number1 << " " << mathematical_operator << " " << number2
			<< " = " << number1 + number2;
	}
	else if (mathematical_operator == '-')
	{
		std::cout << number1 << " " << mathematical_operator << " " << number2
			<< " = " << number1 - number2;
	}
	else if (mathematical_operator == '*')
	{
			std::cout << number1 << " " << mathematical_operator << " " << number2
				<< " = " << number1 * number2;
		
	}
	else if (mathematical_operator == '/')
	{
		if (number2 == 0)
		{
			std::cout << "ќшибка: ƒеление на 0";
		}
		else {
			std::cout << number1 << " " << mathematical_operator << " " << number2
				<< " = " << number1 / number2;
		}
	}
	else if (mathematical_operator == '%')
	{
		std::cout << number1 << " " << mathematical_operator << " " << number2
			<< " = " << (number1 * number2) / 100;
	}
	else
	{
		std::cout << "ќшибка ввода данных";
	}

	return 0;
}
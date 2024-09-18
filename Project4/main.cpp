#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double number1;
	double number2;
	char mathematical_operator;

	std::cout << "������� ������ �����: "; std::cin >> number1;
	std::cout << "������� �������� (+, -, *, /, %): "; std::cin >> mathematical_operator;
	std::cout << "������� ������ �����: "; std::cin >> number2;

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
			std::cout << "������: ������� �� 0";
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
		std::cout << "������ ����� ������";
	}

	return 0;
}
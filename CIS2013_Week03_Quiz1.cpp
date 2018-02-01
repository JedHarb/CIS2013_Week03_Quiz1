#include<iostream>
using namespace std;

int main()
{

	float number1, number2;
	char symbol;
	bool repeat = true;

	while (repeat == true)\
	{
		cout << "Enter the first number: ";
		cin >> number1;
		cout << "Enter the second number: ";
		cin >> number2;
		cout << "What do you want to do with them? (Use + or *) ";
		cin >> symbol;
		switch (symbol)
		{
		case '+':
			cout << "If you add them together, you get " << number1 + number2;
			break;

		case '*':
			cout << "If you multiply them, you get " << number1 * number2;
			break;

		default:
			cout << "You must use one of these operators! (+ or *)";
			
		}
		cout << "\n";
		cout << "Let's do it again! \n";
	}

}
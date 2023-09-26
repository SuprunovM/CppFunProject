#include <iostream>
using namespace std;

int main()
{
	float a, b;
	char c;
	cout << "input a: ";
	cin >> a;
	cout << "unput b: ";
	cin >> b;
	cout << "deystvie: ";
	cin >> c;

	switch (c) {
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':
		if (b == 0)
			cout << "division by zero";
		else
			cout << a / b;
		break;

	default:
		cout << "oshibka";
		break;
	}
}
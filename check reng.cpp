#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b;
	cout << "Введите диапозон: ";
	cin >> a >> b;
	cout << a << " " << b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;
	
}
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, " ");
	srand(time(NULL));
	int array[10];
	int a = 1, b = 9;
	for (int i = 0; i < 10; i++) {
		array[i] = a + rand() % (b + 1 - a);
		cout << array[i] << " ";
	}
	int n = 10;

	for (int i = 0, flag; i < n; i++) {
		flag = true;
		for (int j = 0; j < n; j++) {
			if (array[j] < array[j + 1]) {
				swap(array[j], array[j + 1]);
				flag = false;
			}
		}
		if (flag) break;
	}
	cout << endl;
}
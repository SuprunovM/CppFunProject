//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	if (a > 0) 
//	{
//		cout << "Положительное";
//	}
//	else
//	{
//		if (a == 0) 
//		{
//			cout << "Равно 0";
//		}
//		else 
//		{
//			cout << "Отрицательное";
//		}
//	}
//}


//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	if (a % 2 == 0) 
//	{
//		cout << "Чётное \n";
//	}
//	else
//	{
//		cout << "Нечётное \n";
//	}
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	if (a == 0) 
//	{
//		cout << "0";
//	}
//	else if (a > 0)
//	{
//		cout << ">";
//	}
//		else 
//		{
//			cout << "<";
//		}
//	}

//#include <iostream>
//using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) 
//	{
//		cout << "a больше";
//	}
//	else if (a == b) 
//		{
//			cout << "равны";
//		}
//		else 
//		{
//			cout << "b больше";
//		}
//}

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	short a, b, c, d;
	cin >> a >> b >> c >> d;
	short result = round(float(a + b + c + d) / 4);
	if (result == 5) cout << "Отлич";
	else if (result == 4) cout << "хорош";
	else if (result == 3) cout << "троиш";
	else cout << "Отчисление";
}
#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int user, user1, bot, bot1;
	int countWinuser = 0, countWinbot = 0;
	while (true) {
		system("pause");
		system("cls");
		user = 1 + rand() % 6;
		user1 = 1 + rand() % 6;
		bot = 1 + rand() % 6;
		bot1 = 1 + rand() % 6;

		cout << "вам выпало: ";
		if (user == user1) {
			cout << "дубль";
			user *= 2;
			user1 *= 2;
		}
		cout << "ход бота" << endl;
		cout << "боту выпало: " << bot << " : " << bot1 << endl;
		if (bot == bot1) {
			cout << "дубль";
			bot *= 2;
			bot1 *= 2;
		}
		if (user + user1 > bot + bot1) {
			cout << "победа игрока" << endl;
			countWinuser++;
		}
		if (user + user1 < bot + bot1) {
			cout << "победа бота" << endl;
			countWinbot++;
		}
		else {
			cout << "ничья" << endl;
		}
		cout << "общий счёт: user: " << countWinuser << "bot: " << countWinbot << endl;
		if (countWinuser == 3 || countWinbot == 3) break;
	}
}
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int n, e, count = 0, a;

		//Задача 2
	cout << "Задача 2\nВведите кол-во жителей: ";
	cin >> n;
	int newE = 0;
	for (int i = 0; i < n; i++) {
		cout << "Введите возраст " << count + 1 << " жильца: ";
		cin >> e;
		if (e >= newE)
			newE = e;
		count++;
	}
	cout << "Самый старый житель с возрастом " << newE << endl << endl;

		//задача 3
	cout << "Задача 3\nВведите размер окна по вертикали: ";
	cin >> a;
	cout << "Введите размер окна по горизонтали: ";
	cin >> e;
	if (a % 2 != 0 && e % 2 != 0 && a >= 5 && e >= 5) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < e; j++) {
				if (i == 0)
					cout << " # ";
				else if (j == 0)
					cout << " # ";
				else if (a == i + 1)
					cout << " # ";
				else if (e == j + 1)
					cout << " # ";
				else if (a - i - 1 <= i && a - i > i)
					cout << " * ";
				else if (e - j - 1 <= j && e - j > j)
					cout << " * ";
				else
					cout << "   ";
			}
			cout << endl;
		}
	}
	else
		cout << "Ошибка ввода!" << endl << endl;

		//задача 4
	
	

	return 0;
}
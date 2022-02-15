#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
			//задача 2
	cout << "Задача 2" << "\n";
	cout << "Введите число: " << "\n";
	int n;
	cin >> n;
	if (n > 1) {
		cout << "Модуль числа = " << n << "\n\n";
	}else
		if (n == 0) {
			cout << "Мщдуль числа = 0" << "\n\n";
		}else
			if (n < 0 ) {
				cout << "Модуль числа = " << -n << "\n\n";
			}
			
			//Задача 3
	cout << "Задача 3\nВведите число: ";
	int num;
	cin >> num;
	if (num >= 10 && num <= 99) {
		if (num % 3)
		cout << "Число не делиться без остатка" << "\n\n";
	else
		cout << "Число делиться без остатка." << "\n\n";
	}
	else
		cout << "Ошибка ввода" << "\n\n";

			//Задача 4
	cout << "Задача четвёртая\nВведите 3 числа." << "\n";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 < n2 && n1 < n3)
		cout << "Минимальное число: " << n1 << "\n\n";
	else
		if (n2 < n3 && n2 < n1)
			cout << "Минимальное число: " << n2 << "\n\n";
		else if (n3 < n1 && n3 < n2)
			cout << "Минимальное число: " << n3 << "\n\n";
		else
			cout << "Минимальных чисел 2 или больше." << "\n\n";

			//Задача 5
	cout << "Задача пятая\nВведите двухзначное число: ";
	int x, x1, x2;
	cin >> x;
	x1 = x % 10;
	x2 = x / 10;
	if (x1 > x2)
		cout << x2 << " < " << x1;
	else
		if (x1 < x2)
			cout << x2 << " > " << x1;
		else
			cout << "Эти числа равны." << "\n\n";

			//Задача 6
	cout << "Шестая задача\nВведите букву: " << "\n";
	char le;
	cin >> le;
	switch (le) {
	case 'c': case 'C': cout << "Мяу!" << "\n\n"; break;
	case 'd': case 'D': cout << "Гав!" << "\n\n"; break;
	case 'y': case 'Y': cout << "Кря!" << "\n\n"; break;
	default: cout << "Ошибка ввода!" << "\n\n";
	}

	return 0;
}
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
			//Задача 1
	cout << "Задача 1\nВведите две пары чисел: ";
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 + a2 > b1 + b2) {
		cout << "Произведение первой пары = " << a1 * a2 << "\n\n";
	}
	else
		if (b1 + b2 > a1 + a2) {
			cout << " Произведение второй пары = " << b1 * b2 << "\n\n";
		}
		else
			cout << "Ошибка ввода!";

			//Задача 2
	cout << "Задача 2\nВведите цифру: ";
	unsigned int a;
	cin >> a;
	switch (a) {
	case 1: cout << " ! " <<"\n\n"; break;
	case 2: cout << " @ " << "\n\n"; break;
	case 3: cout << " # " << "\n\n"; break;
	case 4: cout << " $ " << "\n\n"; break;
	case 5: cout << " % " << "\n\n"; break;
	case 6: cout << " ^ " << "\n\n"; break;
	case 7: cout << " & " << "\n\n"; break;
	case 8: cout << " * " << "\n\n"; break;
	case 9: cout << " ( " << "\n\n"; break;
	case 0: cout << " ) " << "\n\n"; break;
	default: cout << "Ошибка ввода!" << "\n\n";
	}

			//Задача 3
	cout << "Задача 3\nВведите номер транспорта:" << "\n";
	cout << "Маршрут № 11 -> 1" << "\n";
	cout << "Маршрут № 52 -> 2" << "\n";
	cout << "Маршрут № 70 -> 3" << "\n";
	cout << "Маршрут № 151 -> 4" << "\n";
	int x;
	cin >> x;
	switch (x) {
	case 1: cout << "Поедете на трамвае 11 км" << "\n\n"; break;
	case 2: cout << "Поедете на автобусе 15 км" << "\n\n"; break;
	case 3: cout << "Поедете на троллейбусе 8 км" << "\n\n"; break;
	case 4: cout << "Поедете на автобусе 140 км" << "\n\n"; break;
	default: cout << "Такого маршрута нет, идите пешком!" << "\n\n";
	}

			//Задача 4
	cout << "Задача 4\nВведите символ: ";
	char n;
	int m, m2;
	cin >> n;
	switch (n) {
	case 'Q': case 'W': case 'E': case 'R': case 'T':case 'Y':
		cout << "Введите два числа: ";
		cin >> m >> m2;
		cout << "Произведение этих чисел = " << m * m2 << "\n\n"; break;
	case 'q': case 'w': case 'e': case 'r': case 't': case 'y':
		cout << "Введите число: ";
		cin >> m;
		cout << "Квадрат этого числа = " << m * m << "\n\n"; break;
	default: cout << "Ошибка ввода!";
	}
	return 0;
}

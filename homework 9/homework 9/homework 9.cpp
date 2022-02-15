#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");


			//Задача 1
	int a, n;
	cout << "Задача 1\nВведите число: ";
	cin >> a;
	int sum = 0;
	while (a <= 100) {
		sum += a;
		a++;
	}
	cout << "Сумма чисел = " << sum << "\n\n";


			//Задача 2
	cout << "Задача 2\nВведите число: ";
	cin >> a;
	n = 0;
	int multi = 0;
	while (n <= 9) {
		multi = a * n;
		cout << multi << "\n";
		n++;
	}
	cout << "\n";


			//Задача 3
	cout << "Задача 3\nВведите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> n;
	while (n != a * a) {
		cout << "Введите второе число ещё раз: ";
		cin >> n;
	}
	cout << "Задача решена!" << "\n\n";
		
	return 0;
}
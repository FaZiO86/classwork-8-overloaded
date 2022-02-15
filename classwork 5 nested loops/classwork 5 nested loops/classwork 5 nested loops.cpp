#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

		//Задача 1 "Таблица умножения"

	/*cout << "Таблица умножения/\n";
	for (int i = 1; i <= 9; i++) {		//Для решения задачи мы используем вложенные циклы, в данной строчке располагается цикл I
		for (int j = 1; j <= 9; j++)	//цикл J. Он является частью тела цикла I, значит создаётся при каждой итеррации цикла I
			cout << i << " * " << j << " = " << i * j << "\t";	//Тело цикла J которое так же является телом цикла I
		cout << "\n";
	}	//Конец тела цикла I
	cout << "\n";*/

		//Задача 2 Рисуем дом

	/*cout << "Введите размер дома: ";
	cin >> n;
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < n; j++)
			if (i > j && i + j > n - 1) //Крыша
				cout << "|VVV|";
			else
				cout << "     ";
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {	//сам дом
		for (int j = 0; j < n; j++)
			cout << "|###|";
		cout << "\n";
	}*/

		//Задача для отладчика.

	/*int a = 0, b = 0;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	int c = 0;
	c = a / b;
	cout << a << " / " << b << " = " << c << "\n\n";*/

	/*cout << "Введите число: ";
	cin >> n;
	if (n % 2 == 0)
		n++;
	else
		cout << "Not nice!\n";
	for (int i = 0; i < n; i++) {
		cout << "Итерация " << i;
		cout << "\n";
	}
	cout << "\n";*/

		//Задача 1
	
	/*char sym;			//char это сивольная переменная!
	cout << "Задача 1\nВведите символ: ";
	cin >> sym;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			cout << sym << " ";
		cout << endl;	//endl это так же как и "\n"
	}*/

		//задача 2

	/*cout << "Задача 2\nВведите начало диапазона: ";
	cin >> n;
	cout << "Введите конец диапазона: ";
	cin >> m;
	int count;
	for (int i = n; i <= m; i++) {
		count = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				count++;
		cout << "Количество делителей числа " << i << " = " << count << endl;
	}*/

	return 0;
}

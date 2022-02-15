#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	int n, m = 427, count, sum;

		//Задача 1
	/*cout << "Задача 1\nВведите число: ";
	cin >> n;
	count = 0;
	m = n;
	while (m) {		//в условии мы m сравниваем с нулём.
		count++;
		m /= 10;
	}
	cout << "Длинна числа " << n << " = " << count << endl << endl;*/

		//Задача 2
	cout << "Задача 2\nВведите 1 число: ";
	cin >> n;
	m = n;
	int k = 1, maxK = 1, newN = n;
	count = 0;
	while (newN) {
		count++;
		newN /= 10;
	}
	while (n) {
		k++;
		cout << "Введите " << k << " число: ";
		cin >> n;
		if (n > m) {
			count = 0;
			newN = n;
			while (newN) {
				count++;
				newN /= 10;
			}
			maxK = k;
			m = n;
		}
	}
	cout << "Максимальное число = " << m << endl;
	cout << "Его длинна = " << count << endl;
	cout << "Порядковый номер = " << maxK << endl << endl;

		//Задача 3. FizzBuzz
	/*cout << "Задача 3\nВведите число: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {	//Фигурные скобки не обязательны!
		if (i % 3 == 0 && i % 5 == 0)		//упрощённое условие (n % 15 == 0)
			cout << "FizzBuzz" << endl;
		else
			if (i % 3 == 0)
				cout << "Fizz" << endl;
			else
				if (i % 5 == 0)
					cout << "Buzz" << endl;
				else
					cout << i << endl;
		cout << endl;
	}*/

		//задача 4 Находим факториал числа.
	/*cout << "Задача 4\nВведите число: ";
	cin >> n;
	long long fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	cout << n << "! = " << fact << endl << endl;*/

		//задача 5
	/*cout << "Задача 5\nВведите начало и конец первого диапазона: ";
	cin >> n >> m;
	cout << "Введите начало и конец второго диапазона: ";
	int a, b, sum1 = 0, sum2 = 0;
	cin >> a >> b;
	for (int i = 1; i <= m; i++)
		sum1 += i;
	for (int i = a; i <= b; i++)
		sum2 += i;
	if (sum1 > sum2)
		cout << "Сумма чисел от " << n << " до " << m << " больше.\n\n";
	else
		if (sum1 < sum2)
			cout << "Сумма чисел от " << a << " до " << b << " больше.\n\n";
		else
			cout << "Сумма чисел обоих диапазонов равны.\n\n";*/

		//задача 6.1 совершенное число
	/*cout << "Задача 6\nВведите число больше нуля: ";
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n)
		cout << "Число " << n << " является совершенным." << endl;
	else
		cout << "Число " << n << " не является совершенным." << endl;*/
		
		// Задача 6.2
	/*cout << "Задача 6.2\nСовершенные числа от 1 до 10000:" << endl;
	for (int j = 1; j <= 10000; j++) {
		sum = 0;
		for (int i = 1; i <= j / 2; i++)
			if (j % i == 0)
				sum += i;
		if (sum == j)
			cout << "Число " << j << endl;
	}*/

		//Задача 7
	cout << "Задача 7\nЯ загадал число от 1 до 500, попробуй его угадать: " << endl;
	cin >> n;
	count = 1;
	
	while (m != n) {
		count++;
		if (n == 0) {
			cout << "Не хотите угадывать моё число, не надо!" << endl;
			cout << "Вы использовали " << count - 2 << " попыток!" << endl;
			break;
		}
		else
			if (n > m) {
				cout << "Не правильно, моё число меньше\nПопробуйте ещё раз: " << endl;
				cin >> n;
			}
			else
				if (n < m) {
					cout << "Не правильно, моё число больше\nПопробуйте ещё раз: " << endl;
					cin >> n;
				}
	}
	if (n == m)
		cout << "Поздравляю, вы угадали моё число, использовав " << count << " попыток!" << endl << endl;


	return 0;
}
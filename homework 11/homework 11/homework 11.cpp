#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a = 8;
		//Задача 1
	cout << "Задача 1" << endl;				//Это решение нашёл в интернете :(  но проштрудил его и даже пользовался отладчиком как в первой задаче, так и во второй. С помощью него реально проще стало понимать код! Супер!
	for (int i = 2; i < 1000; i++)
	{
		for (int m = i - 1; m > 1; m--)
		{
			if (i % m == 0)
				break;
			if (m == 2)
				cout << i << "\n";
		}
	}
	cout << endl << endl;

		//Задача 2
	cout << "Задача 2" << endl;							//К правельному решению приведёт ввод числа 7, как в домашнем задании.
	cout << "Введите размер рисунка: ";					// я дополнил тем, когда пользователь вводит чётное число, что бы выводилась тоже снежинка, правдо по жирнее ))) иначе будет просто икс.
	cin >> a;											//времени ушло много, но зато сам сделал.... 
	if (a % 2 == 0) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i + j == a - 1)
					cout << " *";
				else if (a / 2 - 1 == j || a / 2 == j)
					cout << " *";
				else if (a / 2 - 1 == i || a / 2 == i)
					cout << " *";
				else if (i == j)
					cout << " *";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
	else
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i + j == a - 1)
					cout << " *";
				else if (a - i - 1 <= i && a - i > i)
					cout << " *";
				else if (a - j - 1 <= j && a - j > j) 
					cout << " *";
				else if (i == j)
					cout << " *";
				else
					cout << "  ";
			}
			cout << endl;
	}

	return 0; 
}

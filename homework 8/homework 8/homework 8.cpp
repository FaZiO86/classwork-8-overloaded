#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
		//Задача 1
	int N;
	cout << "Задача 1\nВведите шестизначное число: ";
	cin >> N;
	if (N >= 100000 && N <= 999999) {
		int n1 = N / 100000;
		int n2 = N / 10000 % 10;
		int n3 = N / 1000 % 10;
		int n4 = N / 100 % 10;
		int n5 = N / 10 % 10;
		int n6 = N % 10;
		if (n1 == n6 && n2 == n5 && n3 == n4)
			cout << "Число " << N << " является числом палиндромом." << "\n\n";
		else
			cout << "Число " << N << " не является числом палиндромом." << "\n\n";
	}
	else
		cout << "Ошибка ввода!";
	return 0;
	}
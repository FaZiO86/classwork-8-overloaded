#include <iostream>

using namespace std;
int main() {
	int n = 10; // Создаём переменную Н и сразу присваиваем ей значение, данная переменная имеет числовой тип.
	int  m; // Мы создаём переменную М и не инициализируем её. На данный момент онак пуста.
	m = 5;   //Инициализируем переменную М и даём ей значение 5.
	cout << "n = " << n << ", m = " << m << "\n"; // Выводим значение переменных и складываем их со строками.
	n = 11; // меняем значение переменной Н.
	m = 50; // Меняем значение переменной М
	cout << "Changing...\n";
	cout << "n = " << n << ", m = " << m << "\n"; // Выводим в консоль тем же способом. 
	
	
	int a = 4;
	int b = 16;
	cout << a + b << "\n";  // выводим результат А и Б
	int c = a + b;  // Создаём переменную, где будет храниться результат сложения.
	cout << a << " + " << b << " = " << c << "\n"; // выводим на экран. 
	
	
	cout << "Let's play!\nEnter a number: "; // Просьба ввести число.
	int x; // создаём переменную, которая будет хранить введённое значения.
	cin >> x; // Запись введённого пользователем значения в переменную X.
	cout << "I have " << x + 1 << "\n";
	cout << " I'm Winner!\n"; 
			
			// Задача 1
	int w;
	int h;
	int l;
	cout << "Task 1\nEnter wigth, height and length ";
	cin >> w >> h >> l;
	int volume = w * h * l;
	cout << "Volume = " << volume << "\n\n"; 


			// Задача 2
	cout << "Task 2\nEnter kilometers ";
	int kms;
	cin >> kms;
	const float kmMile = 0.6214; // Создаём константу типа float, константа хранит в себе постоянный коэфицент перевода километров в мили.
	int miles = kms * kmMile; // Создаём переменную miles типа float для хранения вещественного значения.
	cout << kms << " kms = " << miles << " miles.\n\n"; 

	        //задача 3
	/*int rubles;
	int cop;
	int rublesEnd;
	cout << "Enter sum: \n";
	cin >> rubles >> cop;
	cop / 100 + rubles  = rublesEnd;	*/

	int rubles, penny;
	cout << "Task 3\nEnter rubles: ";
	cin >> rubles;
	cout << "Enter Penny: ";
	cin >> penny;
	int newRubles = penny / 100;
	rubles = rubles + newRubles;
	penny = penny - newRubles * 100;
	cout << rubles << " rub. " << penny << " cop.\n\n";

	return 0;
}
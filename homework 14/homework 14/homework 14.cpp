#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	float sum = 0, count = 0;
	int max = 0, min = 0;
		
		
		//Задача 1
	cout << "Задача 1\nНайдём среднее арифметическое массива, состоящего из 10-и элементов." << endl;
	const int lon = 10;
	int arr[lon];
	for (int i = 0; i < lon; i++) {
		cout << "Введите " << i << " элемент массива: ";
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			sum += arr[i];
			count++;
		}
	}
	cout << "Среднее арифметическое всех чётных элементов = " << sum / count << endl << endl;


		//Задача 2
	cout << "Задача 2\nГенератор массива." << endl;		//Как я понял эту задачу, что бы программа отработала нужно ввести число от -2 до 13
	const int Lon = 10;									//Тут я без помощи не обошёлся... не понимал как сделать так, что если наш промежуток a - 3 && a + 3 выходит за пределы массива, как это исправить.
	int Arr[Lon];										//тоесть у меня выводились цифры типа -89342048300 что-то типо такого.
	for (int i = 0; i < Lon; i++) {						//Помог Женя с условиями if else тоесть что бы за пределы массива мы не вылазили, а выводились только имеющиеся у нас элементы в ведённом пользователем диапазоне.
		Arr[i] = rand() % (70 + 1 - 50) + 50;			
		cout << Arr[i] << ", ";
	}
	cout << "\b\b.\n\n";

	cout << "Введите элемент массива: ";
	int a;
	cin >> a;
	if (a <= 3)
		min = a - a;
	else
		min = a - 4;
	if (a > 7)
		max = (a + (10 - a));
	else
		max = a + 3;
	for (int i = min; i < max; i++)
		cout << Arr[i] << ", ";
	cout << "\b\b.\n\n";

	return 0;
}
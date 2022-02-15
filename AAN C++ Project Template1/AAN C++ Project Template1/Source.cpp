//Персональный шаблон проекта С++
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void func(int array[]) {		//Функция для свапа, тоесть смены мест переменных.
	int t = array[0];
	array[0] = array[1];		//при смене Переменных, оригиналы остаются, а Массив переписывается!!!
	array[1] = t;
	cout << array[0] << " " << array[1] << endl;
}

void func1(int num1 = 2, int num2 = 4) {				//квадрат числа
	cout << num1 * num2 << endl;
}

void func2() {
	 static int a = 0;		//статическая переменная, которая переносит значение, если функция вызывается вновь.
	a++;
	cout << a << endl;
}

int y;				//для глобальной переменной значение меняется так же, как и для массива.

		//задачки
void rect(int w, int h);
bool simple(int num);
void pozEl(int arr[], int lenght);
void showArr(int array[], int lenght);
int maxEl(int arr1[], int lenght1, int arr2[], int lenght2);

int main() {
	setlocale (LC_ALL, "Russian");
	srand(time(NULL));
	
	int n, m;

			//Задача 1
	/*cout << "Задача 1\nВведите ширину и высоту прямоугольника: ";
	cin >> n >> m;
	rect(n, m);
	cout << endl;
	rect(4, 5);
	cout << endl;*/

			//Задача 2
	/*cout << "Задача 2\nВведите число: ";
	cin >> n;
	simple(n);
	if (simple(n))
		cout << "Число " << n << " простое." << endl << endl;
	else 
		cout << "Число " << n << " не простое." << endl << endl;
	cout << "Задача 2\nВведите ещё одно число: ";
	cin >> m;
	simple(m);
	if (simple(m))
		cout << "Число " << m << " простое." << endl << endl;
	else
		cout << "Число " << m << " не простое." << endl << endl;*/

			//задача 3
	/*cout << "Задача 3." << endl;
	int z3[5] = { 0, 6, -7, -1, 10 };
	pozEl(z3, 5);*/

			//Задача 4
	cout << "Задача 4." << endl;
	int arr1[4] = { 20, -200, 0, 45 };
	showArr(arr1, 4);
	int arr2[4] = { 35, 40,-10,0 };
	showArr(arr2, 4);
	maxEl(arr1, 4, arr2, 4);
	cout << ""
	
	

	return 0;
}
		//Задача 4
int maxEl(int arr1[], int lenght1, int arr2[], int lenght2) {
	int x = 0;
	for (int i = 0; i < lenght1; i++) {
		cout << arr1[i] << ", ";
		if (arr1[i] > x)
			x = arr1[i];
	}
	cout << "\b\b.\n";
	
	for (int j = 0; j < lenght2; j++) {
		if (arr2[j] > x)
			x = arr2[j];
		cout << arr2[j] << ", ";
	}
	cout << "\b\b.\n";
	
	return arr2[4], arr1[4];
}

		//Задача 3
void pozEl(int arr[], int lenght) {
	for (int i = 0; i < lenght; i++)
		if (arr[i] > 0)
			cout << i << ", ";		//если нужно вывести индекс, то выводим так, если элемент то указываем массив.
	cout << "\b\b.\n";
}

		//Задача 2
bool simple(int num) {
	int count = 1;
	for (int i = 1; i <= num / 2; i++)
		if (num % i == 0) {
			count++;
			if (count > 2)
				break;
		}
	if (count == 2)
		return true;
	return false;
}

		//Задача 1
void rect(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++)
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
				cout << " # ";
			else
				cout << "   ";
		cout << endl;
	}
}

		//Функция для вывода массива
void showArr(int array[], int lenght) {
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}
//Персональный шаблон проекта С++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>		//Библиотека, содержащая в себе функцию sort()

using namespace std;
int main() {
	setlocale (LC_ALL, "Russian");
	srand(time(NULL));
	
	int n, max;

	/*const int lengh = 10;
	int sortArr[lengh];
	cout << "Изначальный массив:\n";
	for (int i = 0; i < lengh; i++) {
		sortArr[i] = rand() % 10 + 1;
		cout << sortArr[i] << " ";
	}
	cout << endl;*/
		
			//Сортировка массива пузырьковым методом.
	/*for (int i = lengh - 1; i > 0; i--)				//перебираем массив наоборот, с конца до начала.
		for (int j = 0; j < i; j++)
			if (sortArr[j] > sortArr[j + 1])			//можно поменять > на <
				swap(sortArr[j], sortArr[j + 1]);*/
	

			//Быстрая сортировка массива
	/*sort(sortArr, sortArr + lengh);
	
	cout << "Отсортированный массив:\n";
	for (int i = 0; i < lengh; i++)
		cout << sortArr[i] << " ";
	cout << endl << endl;*/
			
			//Двухмерный массив
	/*const int rows = 5, columns = 6;
	int mx[rows][columns];
	int count = 0;
	cout << "Двухмерный массив\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			mx[i][j] = rand() % 100;
			cout << mx[i][j] << "\t";		//если двухмерный массив, используем табуляцию вместо пробела
			if (mx[i][j] == 0)
				count++;
		}
		cout << endl;
	}
	cout << "Количество нулей в массиве: " << count << endl << endl;*/

			//Задача 1
	/*cout << "Задача 1" << endl;
	int z1[5][6];
	int sum = 0, min;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			z1[i][j] = rand() % (200 + 1 - 100) + 100;
			cout << z1[i][j] << "\t";
		}
		cout << endl;
	}
	max = z1[0][0];			//Нельзя мин и макс инициализировать как 0!!! Обязательно z1[0][0]
	min = z1[0][0];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 6; j++) {
			if (z1[i][j] > max)
				max = z1[i][j];
			if (z1[i][j] < min)
				min = z1[i][j];
			sum += z1[i][j];
		}
	cout << "Сумма всех элементов равна: " << sum << endl;
	cout << "Среднее арифметическое элементов: " << sum / (5 * 6) << endl;
	cout << "Минимальный элемент = " << min << endl;
	cout << "Максимальный элемент = " << max << endl << endl;*/

			//Задача 2
	cout << "Задача 2" << endl;
	int z2[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++) {
			cout << "Введите " << j << " элемент " << i << " ряда: ";
			cin >> z2[i][j];
		}

	for (int i = 0; i < 3; i++) {
		max = z2[i][0];
		for (int j = 0; j < 4; j++) {
			cout << z2[i][j] << "\t";
			if (z2[i][j] > max)
				max = z2[i][j];
		}
		cout << "Макс = " << max << endl;
	}

			

	
	return 0;
}
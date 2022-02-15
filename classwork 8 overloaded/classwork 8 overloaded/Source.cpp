//Персональный шаблон проекта С++
#include <iostream>

using namespace std;

inline int func(int num) {		//Подставка inline не работает как шаблон, а подставляет тело функции туда, где мы к ней обращаемся.
	if(num % 2 == 0)			// не работает с функциями боьшого размера.
		return num * num * num;
	return num * num;
}

double func(double num1, double num2) {		//второй экземпляр.
	cout << "Дробные числа." << endl;
	return num1 > num2 ? num1 : num2;
}

int func(int num1, int num2) {
	cout << "Целые числа." << endl;
	return (num1 > num2 ? num1 : num2);
}

template <typename T1, typename T2> T1/*либо T2*/ maxFunc(T1 num1, T2 num2) {	//<typename T> переменная переменной. Шаблон функции.
	return num1 > num2 ? num1 : num2; 
}

template <typename T> T mean(T array[], int lenght) {
	T sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}

int main() {
	setlocale (LC_ALL, "Russian");
	
	int n, m;
		
	/*cin >> n;
	cout << func(n) << endl;
	cout << func(5) << endl;
	cin >> n >> m;
	cout << func2(n, m) << endl;		// cout << (n > m ? n : m) << endl;
	cout << func2(5, 9);*/
	/*cin >> n >> m;
	cout << func(n, m) << endl;
	cout << func(5.5, 9.5) << endl;		//Вызов второго экземпляра функции*/

	/*cin >> n >> m;
	cout << maxFunc(n, m) << endl;*/
	cout << "Конец." << endl;

			//Задача 1
	cout << "Задача 1\nИзначальный массив: " << endl;
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\nСреднее арифметическое элементов массива = " << mean(z1, 5) <<  endl;
	
	return 0;
}
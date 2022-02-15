#include <iostream>

using namespace std;
int main() {
	//Задача 1
	/*int N, M;
	cout << "Enter two numbers: ";
	cin >> N >> M;
	if (M == 0)						//создаём условие М=0, если оно выполняется, то переходим к строчке 10, в противном случае переходим к блоку else, действие в строче 12
		cout << "Input error!";
	else
		cout << N << " / " << M << " = " << N / M << "\n\n";*/
	
		
		//Задача 2
	/*int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	if (a > b)				//Первая ступень лестницы if else
		cout << a << " > " << b << "\n\n";
	else 
		if (a < b)
			cout << a << " < " << b << "\n\n";
		else
			cout << a << " = " << b << "\n\n"; */


		// Задача с прямоугольником
	/*unsigned int w, h;
	cout << "Enter wights: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	if (w == 0 && h == 0) {
		cout << "Input error!\n";
	}
		if (h == 0 || w == h) {
			cout << "There is square.\n";
			cout << w << " * " << w << " = " << w * w << "\n\n";
		}
		else 
			if (w == 0) {
				cout << "There is square.\n";
				cout << h << " * " << h << " = " << h * h << "\n\n";
			}
			else {
				cout << "There is rectangle.\n";
				cout << w << " * " << w << " = " << w * w << "\n\n";
			}*/
		// задача 3	
		int year;
		cin >> year;
		if (year % 4) {				//программа сравнивает автоматически с нулём (year % 4 == 0)- нужно поменять вывод!!!
			cout << "365\n\n";
		}
		else
			cout << "366\n\n";
		return 0;
	}
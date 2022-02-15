#include <iostream>

using namespace std;
int main() {
			//Задача 1
	float d;					//d - диаметр
	cout << "Task 1\nEnter the diameter of the circle: " << "\n\n";
	cin >> d;
	float r = d / 2;			//r - радиус
	float s = 3.14 * r * r;		//s - площадь
	cout << "the area of the circle is equal to: " << s <<"\n\n";
	float pd = d * 3.14;		//pd - площадь и диаметр равны.
	cout << "the perimeter and length of the circle are equal to: " << pd << "\n\n";
		
	
			//Задача 2
	float a, b, c;
	cout << "Task 2\nEnter three numbers: " << "\n\n";
	cin >> a >> b >> c;
	cout << "The sum of these numbers is: " << a + b + c << "\n\n";
	cout << "multiplication of these numbers is equal to: " << a * b * c << "\n\n";
	cout << "The arithmetic mean of these numbers is: " << (a + b + c) / 3 << "\n\n";


			//Задача 3
	int salary = 100;
	unsigned int sumSell;
	cout << "Task 3\nEnter the total amount from sales: " << "\n\n";
	cin >> sumSell;
	cout << "the salary of the manager is: " << sumSell / 100 * 5 + 100 << " dollars!" << "\n\n";
	return 0;
}
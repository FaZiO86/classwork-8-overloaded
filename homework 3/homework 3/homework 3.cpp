#include <iostream>

using namespace std;
int main() {

			//Задача 1

	/*int hours, min;                                               // сначала делал так и код не работал, выдавало ошибку в 13 и 14 строках.
	cout << "Task 1\nEnter watch please: ";
	cin >> hours;
	cout << "Enter minutes please: ";
	cin >> min;
	int hours = hours + min / 60;
	int min = min - min / 60 * 60;
	cout << hours << "hours. " << min << "minutes.\n\n";*/

	int hours, min;												// Потом взял и списал код с урока(делал скриншот доски, т.к. в моём решении я делал с дополнительной переменной)
	cout << "Task 1\nEnter watch please: ";							// Сравнил свой код и списанный, и понял, что существующие переменные я пытался снова обьявить!
	cin >> hours;
	cout << "Enter minutes please: ";
	cin >> min;
	hours = hours + min / 60;
	min = min - min / 60 * 60;
	cout << hours << " hours. " << min << " minutes.\n\n"; 

			//Задача 2
	float dig;														// dig - diagonalTV
	cout << "Task 2\nEnter the diagonal TV: ";
	cin >> dig;
	dig = dig * 2.54;
	cout << "Diagonal TV " << dig << " cm.\n\n"; 
			
	
			//Задача 3
	float gr;				//gr-граммы													//Сначала обьявлял переменную int gr, но если вводишь, что хомячок ест по 20 гр в день, то на 30 дней ему надо 0 кг выводилось.
	cout << "Task 3\nhow much food does your hamster eat per day?: ";                   // после обьявления переменной float gr, всё заработало, программа выводит 0.6 Кг.
	cin >> gr;																			//У меня вопрос: я создал для вывода в результат float kg30d соответственно и должно было уже выводиться дробное число?!
	float kg30d = gr * 30 / 1000;		//kg30d- килограммы на 30 дней.                 //но по факту выводился 0, и только после изменения переменной int gr на float gr всё заработало, неужели это важно?
	cout << "you will need " << kg30d << " kilograms for 30 days for your hamster." << "\n\n";


	return 0;
}
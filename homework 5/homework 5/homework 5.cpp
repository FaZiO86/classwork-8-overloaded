#include <iostream>

using namespace std;
int main() {
			// ������ 1
	/*cout << "Task 1\n\n";
	float km, hour, speedH;
	cout << "Please enter the distance in kilometers to the airport : " << "\n";
	cin >> km;
	cout << "Please enter the time in hours in which you would like to cover this distance to the airport: " << "\n";
	cin >> hour;
	cout << "Please enter your speed in km/h with which you will move to the airport: " << "\n";
	cin >> speedH;
	if (speedH >= km / hour) {
		cout << "You will have time to get to the airport!" << "\n";
	}
	else {
		cout << "You will not have time to get to the airport!" << "\n";
		cout << "You should hurry up!" << "\n\n";
	}*/
	
	
			// ������ 2
	/*cout << "Task 2\n\n";
	float n1, n2, n3, n4;
	cout << "Please enter four numbers: ";
	cin >> n1 >> n2 >> n3 >> n4;
	if (n1 > n2 && n1 > n3 && n1 > n4) {
		cout << " Max number: " << n1;
	}
	else
		if (n2 > n1 && n2 > n3 && n2 >n4) {
			cout << "Max number: " << n2;
		}
		else
			if (n3 > n1 && n3 > n2 && n3 > n4) {
				cout << "Max number: " << n3;
			}
				else {
					cout << "Max number: " << n4;
				}*/


			// ������ 3
	cout << "Task 3" << "\n\n";
	float ab, bc, cargo, delCargo, loseTimeB; // ����� ��������� ������������� ����� ������� unsigned?
	cout << "Please enter the distance between points A and B in kilometers: " << "\n";
	cin >> ab; //���������� ����� � � �
	cout << "Please enter the distance between points B and C in kilometers: " << "\n";
	cin >> bc; //���������� ����� � � �
	cout << "Please enter the courier's initial cargo in kilograms: " << "\n";
	cin >> cargo; // ����������� ���
	cout << "Please enter the amount of cargo in kilograms that the courier gets rid of: " << "\n";
	cin >> delCargo; // ���������� ���
	cout << "Please enter the time in hours spent by the courier to stop at point B: " << "\n";
	cin >> loseTimeB; // ����� �� ����� � ����� �
	float speedCura; // ��� �� ����� ��������� ������������� ����� ������� unsigned?
		if (cargo > 20) {  //������� ����� � ������� ������ ���� �����
			speedCura = 1;
		}
		else
			if (cargo >= 10 && cargo <= 20) {
				speedCura = 2;
			}
			else {
					speedCura = 3;
			}
	ab /= speedCura;
	cargo = cargo - delCargo;
		if (cargo > 20) {
			speedCura = 1;
		}
		else
			if (cargo >= 10 && cargo <= 20) {
				speedCura = 2;
			}
			else {
				speedCura = 3;
			}
		bc /= speedCura;
		cout << "the courier went from point A to point B for: " << ab + loseTimeB + bc << " hours" << "\n\n";
	return 0;
}
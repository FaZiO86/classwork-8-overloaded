#include <iostream>

using namespace std;
int main() {

			//������ 1

	/*int hours, min;                                               // ������� ����� ��� � ��� �� �������, �������� ������ � 13 � 14 �������.
	cout << "Task 1\nEnter watch please: ";
	cin >> hours;
	cout << "Enter minutes please: ";
	cin >> min;
	int hours = hours + min / 60;
	int min = min - min / 60 * 60;
	cout << hours << "hours. " << min << "minutes.\n\n";*/

	int hours, min;												// ����� ���� � ������ ��� � �����(����� �������� �����, �.�. � ��� ������� � ����� � �������������� ����������)
	cout << "Task 1\nEnter watch please: ";							// ������� ���� ��� � ���������, � �����, ��� ������������ ���������� � ������� ����� ��������!
	cin >> hours;
	cout << "Enter minutes please: ";
	cin >> min;
	hours = hours + min / 60;
	min = min - min / 60 * 60;
	cout << hours << " hours. " << min << " minutes.\n\n"; 

			//������ 2
	float dig;														// dig - diagonalTV
	cout << "Task 2\nEnter the diagonal TV: ";
	cin >> dig;
	dig = dig * 2.54;
	cout << "Diagonal TV " << dig << " cm.\n\n"; 
			
	
			//������ 3
	float gr;				//gr-������													//������� �������� ���������� int gr, �� ���� �������, ��� ������� ��� �� 20 �� � ����, �� �� 30 ���� ��� ���� 0 �� ����������.
	cout << "Task 3\nhow much food does your hamster eat per day?: ";                   // ����� ���������� ���������� float gr, �� ����������, ��������� ������� 0.6 ��.
	cin >> gr;																			//� ���� ������: � ������ ��� ������ � ��������� float kg30d �������������� � ������ ���� ��� ���������� ������� �����?!
	float kg30d = gr * 30 / 1000;		//kg30d- ���������� �� 30 ����.                 //�� �� ����� ��������� 0, � ������ ����� ��������� ���������� int gr �� float gr �� ����������, ������� ��� �����?
	cout << "you will need " << kg30d << " kilograms for 30 days for your hamster." << "\n\n";


	return 0;
}
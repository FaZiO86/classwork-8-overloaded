#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	float sum = 0, count = 0;
	int max = 0, min = 0;
		
		
		//������ 1
	cout << "������ 1\n����� ������� �������������� �������, ���������� �� 10-� ���������." << endl;
	const int lon = 10;
	int arr[lon];
	for (int i = 0; i < lon; i++) {
		cout << "������� " << i << " ������� �������: ";
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			sum += arr[i];
			count++;
		}
	}
	cout << "������� �������������� ���� ������ ��������� = " << sum / count << endl << endl;


		//������ 2
	cout << "������ 2\n��������� �������." << endl;		//��� � ����� ��� ������, ��� �� ��������� ���������� ����� ������ ����� �� -2 �� 13
	const int Lon = 10;									//��� � ��� ������ �� ��������... �� ������� ��� ������� ���, ��� ���� ��� ���������� a - 3 && a + 3 ������� �� ������� �������, ��� ��� ���������.
	int Arr[Lon];										//������ � ���� ���������� ����� ���� -89342048300 ���-�� ���� ������.
	for (int i = 0; i < Lon; i++) {						//����� ���� � ��������� if else ������ ��� �� �� ������� ������� �� �� ��������, � ���������� ������ ��������� � ��� �������� � ������� ������������� ���������.
		Arr[i] = rand() % (70 + 1 - 50) + 50;			
		cout << Arr[i] << ", ";
	}
	cout << "\b\b.\n\n";

	cout << "������� ������� �������: ";
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
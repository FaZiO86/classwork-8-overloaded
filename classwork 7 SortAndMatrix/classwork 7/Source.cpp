//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>		//����������, ���������� � ���� ������� sort()

using namespace std;
int main() {
	setlocale (LC_ALL, "Russian");
	srand(time(NULL));
	
	int n, max;

	/*const int lengh = 10;
	int sortArr[lengh];
	cout << "����������� ������:\n";
	for (int i = 0; i < lengh; i++) {
		sortArr[i] = rand() % 10 + 1;
		cout << sortArr[i] << " ";
	}
	cout << endl;*/
		
			//���������� ������� ����������� �������.
	/*for (int i = lengh - 1; i > 0; i--)				//���������� ������ ��������, � ����� �� ������.
		for (int j = 0; j < i; j++)
			if (sortArr[j] > sortArr[j + 1])			//����� �������� > �� <
				swap(sortArr[j], sortArr[j + 1]);*/
	

			//������� ���������� �������
	/*sort(sortArr, sortArr + lengh);
	
	cout << "��������������� ������:\n";
	for (int i = 0; i < lengh; i++)
		cout << sortArr[i] << " ";
	cout << endl << endl;*/
			
			//���������� ������
	/*const int rows = 5, columns = 6;
	int mx[rows][columns];
	int count = 0;
	cout << "���������� ������\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			mx[i][j] = rand() % 100;
			cout << mx[i][j] << "\t";		//���� ���������� ������, ���������� ��������� ������ �������
			if (mx[i][j] == 0)
				count++;
		}
		cout << endl;
	}
	cout << "���������� ����� � �������: " << count << endl << endl;*/

			//������ 1
	/*cout << "������ 1" << endl;
	int z1[5][6];
	int sum = 0, min;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			z1[i][j] = rand() % (200 + 1 - 100) + 100;
			cout << z1[i][j] << "\t";
		}
		cout << endl;
	}
	max = z1[0][0];			//������ ��� � ���� ���������������� ��� 0!!! ����������� z1[0][0]
	min = z1[0][0];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 6; j++) {
			if (z1[i][j] > max)
				max = z1[i][j];
			if (z1[i][j] < min)
				min = z1[i][j];
			sum += z1[i][j];
		}
	cout << "����� ���� ��������� �����: " << sum << endl;
	cout << "������� �������������� ���������: " << sum / (5 * 6) << endl;
	cout << "����������� ������� = " << min << endl;
	cout << "������������ ������� = " << max << endl << endl;*/

			//������ 2
	cout << "������ 2" << endl;
	int z2[3][4];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++) {
			cout << "������� " << j << " ������� " << i << " ����: ";
			cin >> z2[i][j];
		}

	for (int i = 0; i < 3; i++) {
		max = z2[i][0];
		for (int j = 0; j < 4; j++) {
			cout << z2[i][j] << "\t";
			if (z2[i][j] > max)
				max = z2[i][j];
		}
		cout << "���� = " << max << endl;
	}

			

	
	return 0;
}
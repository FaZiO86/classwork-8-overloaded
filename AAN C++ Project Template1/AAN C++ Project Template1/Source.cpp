//������������ ������ ������� �++
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

void func(int array[]) {		//������� ��� �����, ������ ����� ���� ����������.
	int t = array[0];
	array[0] = array[1];		//��� ����� ����������, ��������� ��������, � ������ ��������������!!!
	array[1] = t;
	cout << array[0] << " " << array[1] << endl;
}

void func1(int num1 = 2, int num2 = 4) {				//������� �����
	cout << num1 * num2 << endl;
}

void func2() {
	 static int a = 0;		//����������� ����������, ������� ��������� ��������, ���� ������� ���������� �����.
	a++;
	cout << a << endl;
}

int y;				//��� ���������� ���������� �������� �������� ��� ��, ��� � ��� �������.

		//�������
void rect(int w, int h);
bool simple(int num);
void pozEl(int arr[], int lenght);
void showArr(int array[], int lenght);
int maxEl(int arr1[], int lenght1, int arr2[], int lenght2);

int main() {
	setlocale (LC_ALL, "Russian");
	srand(time(NULL));
	
	int n, m;

			//������ 1
	/*cout << "������ 1\n������� ������ � ������ ��������������: ";
	cin >> n >> m;
	rect(n, m);
	cout << endl;
	rect(4, 5);
	cout << endl;*/

			//������ 2
	/*cout << "������ 2\n������� �����: ";
	cin >> n;
	simple(n);
	if (simple(n))
		cout << "����� " << n << " �������." << endl << endl;
	else 
		cout << "����� " << n << " �� �������." << endl << endl;
	cout << "������ 2\n������� ��� ���� �����: ";
	cin >> m;
	simple(m);
	if (simple(m))
		cout << "����� " << m << " �������." << endl << endl;
	else
		cout << "����� " << m << " �� �������." << endl << endl;*/

			//������ 3
	/*cout << "������ 3." << endl;
	int z3[5] = { 0, 6, -7, -1, 10 };
	pozEl(z3, 5);*/

			//������ 4
	cout << "������ 4." << endl;
	int arr1[4] = { 20, -200, 0, 45 };
	showArr(arr1, 4);
	int arr2[4] = { 35, 40,-10,0 };
	showArr(arr2, 4);
	maxEl(arr1, 4, arr2, 4);
	cout << ""
	
	

	return 0;
}
		//������ 4
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

		//������ 3
void pozEl(int arr[], int lenght) {
	for (int i = 0; i < lenght; i++)
		if (arr[i] > 0)
			cout << i << ", ";		//���� ����� ������� ������, �� ������� ���, ���� ������� �� ��������� ������.
	cout << "\b\b.\n";
}

		//������ 2
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

		//������ 1
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

		//������� ��� ������ �������
void showArr(int array[], int lenght) {
	cout << "����������� ������:\n[";
	for (int i = 0; i < lenght; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}
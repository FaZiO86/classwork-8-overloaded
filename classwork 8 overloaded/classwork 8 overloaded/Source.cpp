//������������ ������ ������� �++
#include <iostream>

using namespace std;

inline int func(int num) {		//��������� inline �� �������� ��� ������, � ����������� ���� ������� ����, ��� �� � ��� ����������.
	if(num % 2 == 0)			// �� �������� � ��������� ������� �������.
		return num * num * num;
	return num * num;
}

double func(double num1, double num2) {		//������ ���������.
	cout << "������� �����." << endl;
	return num1 > num2 ? num1 : num2;
}

int func(int num1, int num2) {
	cout << "����� �����." << endl;
	return (num1 > num2 ? num1 : num2);
}

template <typename T1, typename T2> T1/*���� T2*/ maxFunc(T1 num1, T2 num2) {	//<typename T> ���������� ����������. ������ �������.
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
	cout << func(5.5, 9.5) << endl;		//����� ������� ���������� �������*/

	/*cin >> n >> m;
	cout << maxFunc(n, m) << endl;*/
	cout << "�����." << endl;

			//������ 1
	cout << "������ 1\n����������� ������: " << endl;
	float z1[5] = { 4.1, 4.9, 2.02, 0.101, 1.2 };
	for (int i = 0; i < 5; i++)
		cout << z1[i] << " ";
	cout << "\n������� �������������� ��������� ������� = " << mean(z1, 5) <<  endl;
	
	return 0;
}
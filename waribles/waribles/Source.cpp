#include <iostream>

using namespace std;
int main() {
	int n = 10; // ������ ���������� � � ����� ����������� �� ��������, ������ ���������� ����� �������� ���.
	int  m; // �� ������ ���������� � � �� �������������� �. �� ������ ������ ���� �����.
	m = 5;   //�������������� ���������� � � ��� �� �������� 5.
	cout << "n = " << n << ", m = " << m << "\n"; // ������� �������� ���������� � ���������� �� �� ��������.
	n = 11; // ������ �������� ���������� �.
	m = 50; // ������ �������� ���������� �
	cout << "Changing...\n";
	cout << "n = " << n << ", m = " << m << "\n"; // ������� � ������� ��� �� ��������. 
	
	
	int a = 4;
	int b = 16;
	cout << a + b << "\n";  // ������� ��������� � � �
	int c = a + b;  // ������ ����������, ��� ����� ��������� ��������� ��������.
	cout << a << " + " << b << " = " << c << "\n"; // ������� �� �����. 
	
	
	cout << "Let's play!\nEnter a number: "; // ������� ������ �����.
	int x; // ������ ����������, ������� ����� ������� �������� ��������.
	cin >> x; // ������ ��������� ������������� �������� � ���������� X.
	cout << "I have " << x + 1 << "\n";
	cout << " I'm Winner!\n"; 
			
			// ������ 1
	int w;
	int h;
	int l;
	cout << "Task 1\nEnter wigth, height and length ";
	cin >> w >> h >> l;
	int volume = w * h * l;
	cout << "Volume = " << volume << "\n\n"; 


			// ������ 2
	cout << "Task 2\nEnter kilometers ";
	int kms;
	cin >> kms;
	const float kmMile = 0.6214; // ������ ��������� ���� float, ��������� ������ � ���� ���������� ��������� �������� ���������� � ����.
	int miles = kms * kmMile; // ������ ���������� miles ���� float ��� �������� ������������� ��������.
	cout << kms << " kms = " << miles << " miles.\n\n"; 

	        //������ 3
	/*int rubles;
	int cop;
	int rublesEnd;
	cout << "Enter sum: \n";
	cin >> rubles >> cop;
	cop / 100 + rubles  = rublesEnd;	*/

	int rubles, penny;
	cout << "Task 3\nEnter rubles: ";
	cin >> rubles;
	cout << "Enter Penny: ";
	cin >> penny;
	int newRubles = penny / 100;
	rubles = rubles + newRubles;
	penny = penny - newRubles * 100;
	cout << rubles << " rub. " << penny << " cop.\n\n";

	return 0;
}
#include <iostream>

using namespace std;
int main() {
	//������ 1
	/*int N, M;
	cout << "Enter two numbers: ";
	cin >> N >> M;
	if (M == 0)						//������ ������� �=0, ���� ��� �����������, �� ��������� � ������� 10, � ��������� ������ ��������� � ����� else, �������� � ������ 12
		cout << "Input error!";
	else
		cout << N << " / " << M << " = " << N / M << "\n\n";*/
	
		
		//������ 2
	/*int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	if (a > b)				//������ ������� �������� if else
		cout << a << " > " << b << "\n\n";
	else 
		if (a < b)
			cout << a << " < " << b << "\n\n";
		else
			cout << a << " = " << b << "\n\n"; */


		// ������ � ���������������
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
		// ������ 3	
		int year;
		cin >> year;
		if (year % 4) {				//��������� ���������� ������������� � ���� (year % 4 == 0)- ����� �������� �����!!!
			cout << "365\n\n";
		}
		else
			cout << "366\n\n";
		return 0;
	}
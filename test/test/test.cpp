#include <iostream>

using namespace std;
int main() {
			//������ 2
	cout << "\"Hello World!\" Dennis said.\n";
	cout << "His voice was full of joy and\n";
	cout << "happiness. He expected a response from\n";
	cout << "the world, but the world was silent...\n";
	cout << "		     \\History of C++" << "\n\n";


			//������ 3
	double r;
	const double pi = 3.14;
	cout << "enter the radius of the ball: " << "\n\n";
	cin >> r;
	double v = (4.0/3.0) * pi * (r * r * r);  // ���������!!!  4 ��������� �� 3, ���������� 0, ���� ������ ������� �����.
	cout << "the volume of the ball is: " << v << "\n\n";
			
	
			//������ 4
	int sec;
	cout << "enter seconds: ";
	cin >> sec;
	int min = sec / 60;
	int hours = min / 60;
	sec = sec % 60;
	min = min % 60;
	cout << "now: " << hours << ":" << min << ":" << sec << "\n\n";
			
	
			//������ 5
	float gb, mbSec;
	cout << "enter file size: ";
	cin >> gb;
	cout << "enter internet speed: ";
	cin >> mbSec;
	int seC = gb * 1024 / mbSec;
	cout << "you will download the movie for: " << seC << " seconds." << "\n\n";
	
	return 0;
}
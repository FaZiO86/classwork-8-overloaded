#include <iostream>

using namespace std;
int main() {
	int pirates;
	cout << "Let's play the, game!\nEnter the pirates number; ";
	cin >> pirates;
	cout << "Let the battle begins!\nEnter losts: ";
	int losts;
	cin >> losts;
	pirates -= losts; // ����������� -= ��� ��������� ���������� ������� ��  losts
	cout << "The are " << pirates << "pirates.\nEnter the gold: ";
	int gold;
	cin >> gold;
	int minGold = gold / (pirates + 1);
	int captainsGold = minGold + gold % (pirates + 1); // ��� ���������� ������� ������
	cout << "Pirate gold - " << minGold << "captain gold - " << captainsGold << "\n";


			// ������ 1
	int n1, n2, n3, n4, n5;
	cout << "Input 5 marks: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	//  �� �����������...  int meaN = (n1 + n2 + n3 + n4 + n5) / 5;
	if ((n1 + n2 + n3 + n4 + n5) / 5 >= 4)
		cout << "Acessed!" << "\n";
	else
		cout << "Not acessed!" << "\n\n";

	return 0;
}
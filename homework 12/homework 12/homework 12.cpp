#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
			//???????? ?????? ?? ??????????!
	
	int count = 1, count1 = 1, count2 = 1, a = 82, ans, sum = 0, mult;
	
	cout << "?????? ??? ????? ?????? ??? ???????, ??????? ?? ??????? ? ???????? ???? ??????!" << endl;
	cout << "?? 1 ?? 2-? ???????, ???????.\n?? 3 ?? 5-? ???????, ??????.\n?? 6 ?? 7-? ???????, ?????????????????.\n8 ? ?????? ???????, ?????!" << endl;
	cout << "???? ???????? ?????????? ?????? ??? ?????????? ????????????, ?????? ????? ?????? ??????? 0" << endl << endl;
	do {
		cout << "????, ?????? 1" << endl;
		cout << "??????? ?????: 9 + 9 / 9 + 9 * 9 - 9 = ";
		cin >> ans;
		if (ans == 0)
			cout << "?? ?????? ???????? ?? ???? ??????? ????? ????????? ? ??????????" << endl << endl;
		while (ans != a) {
			count++;
			if (ans == 0) {
				cout << "?? ???????????? ???????: " << count - 2 << endl << endl;
				count = 9;
				break;
			}
			cout << "?? ?????????, ?????????? ??? ???: ";
			cin >> ans;
		}
		if (ans == a) {
			switch (count) {
			case 1: case 2: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ???????!" << endl << endl; break;
			case 3: case 4: case 5: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ??????!" << endl << endl; break;
			case 6: case 7: cout << "?? ???????? ?? ?????? ?????? ?? ?????? ?????????????????!" << endl << endl; break;
			}
			if (count >= 8)
				cout << "?? ????????? ?? ?????? ?????? " << count << " ???????, ??? ????? ?????!" << endl << endl;
		}


		cout << "?????? ??????\n??????? ????? ????? ?? 10 ?? 30: ";
		cin >> ans;
		while (ans < 10 || ans > 30) {
			cout << "?????? ?????!" << endl;
			cin >> ans;
		}
		if (ans >= 10 || ans <= 30) {
			cout << "? ?????? ??????? ????? ????? ?? 1 ?? ?????????? ???? ????? ?? ????????? ???????????!" << endl;
			for (int i = 1; i <= ans; i++) {
				sum += i;
				cout << i << " + ";
			}
			cout << "\b\b" << " = ";
			cin >> ans;
			if (ans == 0)
				cout << "?? ?????? ???????? ?? ???? ??????? ????? ????????? ? ??????????" << endl << endl;
			while (ans != sum) {
				count1++;
				if (ans == 0) {
					cout << "?? ???????????? ???????: " << count1 - 2 << endl << endl;
					count1 = 9;
					break;
				}
				cout << "?? ?????????, ?????????? ??? ???: ";
				cin >> ans;
			}
			if (ans == sum) {
				switch (count1) {
				case 1: case 2: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ???????!" << endl << endl; break;
				case 3: case 4: case 5: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ??????!" << endl << endl; break;
				case 6: case 7: cout << "?? ???????? ?? ?????? ?????? ?? ?????? ?????????????????!" << endl << endl; break;
				}
				if (count1 >= 8)
					cout << "?? ????????? ?? ?????? ?????? " << count1 << " ???????, ??? ????? ?????!" << endl << endl;
			}
		}


		cout << "?????? ??????!\n??????? ?????????????? ????????????? ?????: ";
		cin >> ans;
		while (ans < 1000 || ans > 9999) {
			cout << "?????? ?????!" << endl;
			cin >> ans;
		}
		if (ans >= 1000 || ans <= 9999) {
			cout << "? ?????? ??????? ???????????? ???? ?????? ?????: ";
			int a, b, c, d;
			a = ans % 10;
			b = (ans / 10) % 10;
			c = (ans / 100) % 10;
			d = ans / 1000;
			mult = a * b * c * d;
			cin >> ans;
			if (ans == 0)
				cout << "?? ?????? ???????? ?? ???? ??????? ????? ????????? ? ??????????" << endl << endl;
			while (ans != mult) {
				count2++;
				if (ans == 0) {
					cout << "?? ???????????? ???????: " << count2 - 2 << endl << endl;
					count2 = 9;
					break;
				}
				cout << "?? ?????????, ?????????? ??? ???: ";
				cin >> ans;
			}
			if (ans == mult) {
				switch (count2) {
				case 1: case 2: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ???????!" << endl << endl; break;
				case 3: case 4: case 5: cout << "??????????, ?? ???????? ?? ?????? ?????? ?? ?????? ??????!" << endl << endl; break;
				case 6: case 7: cout << "?? ???????? ?? ?????? ?????? ?? ?????? ?????????????????!" << endl << endl; break;
				}
				if (count2 >= 8)
					cout << "?? ????????? ?? ?????? ?????? " << count2 << " ???????, ??? ????? ?????!" << endl << endl;
			}

		}
		cout << "???????? ?????!" << endl;			//? ?????? ??????? ?? ????, ??? ???????? ?? ?????? ??????? ?? "??????" ????? ????????? ?? ?????? 5-? ???????. ??????? 3, ?????? ???????? ?? 3
		sum = count + count1 + count2;				
		if (sum <= 6)
			cout << "?? ????? ???? ?? ???????!" << endl << endl;
		else
			if (sum > 6 && sum <= 15)								//?????? ?????? ?????, ??? ?? ???-?? ??????? ?? ???? ???????? (?? 6 ?? 15 ???????) ???? ?? "??????". ? ?.?.
				cout << "?? ????? ???? ?? ??????!" << endl << endl;
			else
				if (sum > 15 && sum <= 21)
					cout << "?? ????? ???? ?? ?????????????????, ?? ????? ????????? ???? ?? ????? ?????? ??????!" << endl << endl;
				else
					cout << "?? ?? ????? ????! ?????!" << endl << endl;
		cout << "?????? ?????????? (1 - ??, 0 - ???) ->";
		cin >> ans;
	} while (ans == 1);


	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int first = 1;
	int second;
	int k;
	cout << "Enter the amount of stones" << endl;
	cin >> k;
	while (cin.fail() || k < 1) {
		cout << "Wrong input" << endl;
		cin >> k;
	}

	while (k > 10) {
		k -= first;
		cout << "1 stone was taken." << endl;
		cout << "Current amount: " << k << endl;
		cout << "Your turn." << endl;
		cin >> second;
		while (cin.fail() || abs(second - first) != 1) {
			cout << "Wrong input" << endl;
			cin >> second;
		}
		k -= second;
	}
	cout << "Current amount: " << k << endl;
	if (k > 7 && k < 11) {

		while (k > 3) {
			k -= first;
			cout << "1 stone was taken." << endl;
			cout << "Current amount: " << k << endl;
			cout << "Your turn." << endl;
			cin >> second;
			while (cin.fail() || abs(second - first) != 1) {
				cout << "Wrong input" << endl;
				cin >> second;
			}
			k -= second;
			cout << "Current amount: " << k << endl;
		}
		if (k == 1) {
			cout << "1 stone was taken. There are no more stones.";
		}
		if (k == 3) {
			cout << "3 stones were taken. There are no more stones.";
		}
		if (k == 2) {
			cout << "1 stone was taken and only 1 is available.";
		}
		cout << " You lost" << endl;
	}
}
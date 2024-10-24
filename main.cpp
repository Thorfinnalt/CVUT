#include <iostream>

using namespace std;

const int notes[] = { 5000,2000,1000,500,200,100,50,20,10,5,2,1 };

void static note(const int notes[], int amount, int size) {
	int totalCount = 0;
	int count = 0;
	for (int i = 0; i <= size; i++) {
		if (amount >= notes[i]) {
			totalCount += amount / notes[i];
			count = amount / notes[i];
			cout << "Amount of " << notes[i] << " -> " << count << endl;
			amount %= notes[i];
		}
	}
	cout << "Total amount of bills and coins -> " << totalCount << endl;
}


int main() {
	cout << ".............MINIMUM COIN CHANGE PROGRAM............." << endl;
	int money;
	int size = sizeof(notes) / sizeof(notes[0]);
	cout << "Please, enter the amount in CZK: ";
	cin >> money;
	note(notes, money, size);
	return 0;
}
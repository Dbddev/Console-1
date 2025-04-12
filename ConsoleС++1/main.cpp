#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	float n, b, l;
	cout << "Enter 2 numbers: " << endl;
	cin >> n;
	cin >> b;
	cout << "Choose operation: " << endl << "Press 1 to divide " << endl << "Press 2 to multiply " << endl << "Press 3 to sum up" << endl << "Press 4 to subtract" << endl;
	cin >> l;
	if (l == 1) {
		float a1 = n / b;
		cout << "Answer: " << a1; }
	if (l == 2) {
		float  a2 = n * b;
		cout << "Answer: " << a2;
	}
	if (l == 3) {
		float a3 = n + b;
		cout << "Answer: " << a3;
	}
	if (l == 4) {
		float a4 = n - b;
		cout << "Answer: " << a4;
	}

	return 0;
}
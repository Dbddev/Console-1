#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	float n;
	float b;
	char l;
	cout << "Enter operation: " << endl;
	cin >> n >> l >> b;

	if (l == '/') {
		float a1 = n / b;
		cout << "Answer: " << a1; }
	else if (l == '*') {
		float  a2 = n * b;
		cout << "Answer: " << a2;
	}
	else if (l == '+') {
		float a3 = n + b;
		cout << "Answer: " << a3;
	}
	else if (l == '-') {
		float a4 = n - b;
		cout << "Answer: " << a4;
	}

	return 0;
}
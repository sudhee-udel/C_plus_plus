#include <iostream>
using std::cout;
using std::endl;

int squareByValue(int);
void squareByReference(int &);

int main() {
	int x = 2;
	int z = 4;

	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference(z);
	cout << "z = " << z << " after squareByReference" << endl;

	return 0;
}

int squareByValue(int number) {
	number = number * number;

	return number;
}

void squareByReference(int &numberRef) {
	numberRef *= numberRef;
}

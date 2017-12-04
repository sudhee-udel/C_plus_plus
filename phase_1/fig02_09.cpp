#include <iostream>

using std::cin;
using std::cout;
using std::endl;

using namespace std;

int main() {
	int number1;
	int number2;

	cout << "Enter two integers to compare: ";
	cin >> number1 >> number2;

	if ( number1 == number2 ) {
		cout << number1 << " == " << number2 << endl;
	}

	if ( number1 != number2 ) {
		cout << number1 << " != " << number2 << endl;
	}

	if ( number1 < number2 ) {
		cout << number1 << " < " << number2 << endl;
	}

	if ( number1 > number2 ) {
		cout << number1 << " > " << number2 << endl;
	}

	if ( number1 <= number2 ) {
		cout << number1 << " <= " << number2 << endl;
	}

	if ( number1 >= number2 ) {
		cout << number1 << " >= " << number2 << endl;
	}

	return 0;
}

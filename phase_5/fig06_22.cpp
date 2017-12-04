#include <iostream>
using std::cout;
using std::endl;

int number = 7;

int main() {
	double number = 10.5;

	cout << "Local double value of number = " << number << endl;
	cout << "Global value of number = " << ::number << endl;

	return 0;
}

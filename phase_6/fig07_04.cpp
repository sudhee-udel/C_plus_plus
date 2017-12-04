#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

	cout << "Element" << setw(13) << "Value" << endl;

	for (int i = 0; i < 10; i++) {
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}

	return 0;
}

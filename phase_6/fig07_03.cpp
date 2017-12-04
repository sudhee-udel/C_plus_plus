#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	int n[10];

	cout << "Element" << setw(13) << "Value" << endl;
	
	for (int i = 0; i < 10; i++) {
		n[i] = 0;
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}
		
	return 0;
}

#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void);
void automaticArrayInit(void);

int main() {
	cout << "First call to each function:" << endl;
	staticArrayInit();
	automaticArrayInit();

	cout << endl << endl << "Second call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;

	return 0;
}

void staticArrayInit() {
	static int array1[3];

	cout << endl << "Values on entering staticArrayInit:" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "array1[" << i << "] = " << array1[i] << " ";
	}

	cout << endl << "Values on exiting staticArrayInit:" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "array1[" << i << "] = " << (array1[i] += 5) << " ";
	}
}

void automaticArrayInit() {
	int array2[3] = {1, 2, 3};

	cout << endl << endl << "Values on entering automaticArrayInit:" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "array2[" << i << "] = " << array2[i] << " ";
	}

	cout << endl << "Values on exiting automaicArrayInit:" << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << "array2[" << i << "] = " << (array2[i] += 5) << " ";
	}
}

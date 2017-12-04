#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string name) {
	setCourseName(name);
}

void GradeBook::setCourseName(string name) {
	if (name.length() <= 25) {
		courseName = name;
	}

	if (name.length() > 25) {
		courseName = name.substr(0, 25);

		cout << "Name \"" << name << "\" exceeds maximum length (25).\n";
		cout << "Limiting courseName to first 25 characters\n" << endl;
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to " << getCourseName() << endl;
}

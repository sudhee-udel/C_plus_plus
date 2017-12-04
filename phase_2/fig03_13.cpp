#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{
	GradeBook gradeBook1("CISC 101 sioajfodsjfsdoiajfosdijfoisdfjosidjf");
	GradeBook gradeBook2("CISC 220");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << endl;
	cout << "gradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

	return 0;
}

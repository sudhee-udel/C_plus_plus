#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h"

GradeBook::GradeBook(string name, const int gradesArray[][tests] ) {
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			grades[student][test] = gradesArray[student][test];
		}
	}
}

void GradeBook::setCourseName(string name) {
	if (name.length() <= 25) {
		courseName = name;
	} else {
		courseName = name.substr(0, 25);

		cout << "Name \"" << name << "\"exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {
	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}

void GradeBook::determineClassAverage() {
	int total;
	int gradeCounter;
	int grade;
	double average;

	total = 0;
	gradeCounter = 0;
	grade = 0;

	cout << "Enter grade or -1 to quit: " << endl;

	while (grade != -1) {
		cout << "Enter grade: ";
		cin >> grade;
		if (grade > 0) {
			total += grade;
			gradeCounter++;
		}
	}

	if (gradeCounter > 0) {
		average = static_cast<double> (total) / gradeCounter;

		cout << "\nTotal of all " << gradeCounter << " grade(s) is " << total << endl;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
	} else {
		cout << "No grades were entered" << endl;
	}
}

void GradeBook::inputGrades() {
	int grade;

	cout << "Enter the letter grades." << endl;
	cout << "Enter the EOF charater to end input." << endl;

	while ((grade = cin.get()) != EOF) {
		switch (grade) {
			case 'A':
			case 'a':
				aCount++;
				break;
			case 'B':
			case 'b':
				bCount++;
				break;
			case 'C':
			case 'c':
				cCount++;
				break;
			case 'D':
			case 'd':
				dCount++;
				break;
			case 'F':
			case 'f':
				fCount++;
				break;
			case '\n':
			case '\t':
			case ' ':
				break;
			default:
				cout << "Please enter a valid grade." << endl;
				break;
		}
	}
}

void GradeBook::displayGradeReport() {
	cout << endl << endl;
	cout << "Number of students who received each letter grade\n";
	cout << "# of A's: " << aCount << endl;
	cout << "# of B's: " << bCount << endl;
	cout << "# of C's: " << cCount << endl;
	cout << "# of D's: " << dCount << endl;
	cout << "# of F's: " << fCount << endl;
}

void GradeBook::processGrades() {
	outputGrades();

	cout << "Lowest grade is " << getMinimum() << endl << "Highest grade is " << getMaximum() << endl;

	outputBarChart();
}

void GradeBook::outputGrades() {
	cout << "\nThe grades are: " << endl << endl;
	cout << "            ";

	for (int test = 0; test < tests; test++) {
		cout << "Test " << test + 1 << " ";
	}

	cout << "Average" << endl;

	for (int student = 0; student < students; student++) {
		cout << "Student " << setw(2) << student + 1;

		for (int test = 0; test < tests; test++) {
			cout << setw(8) << grades[student][test];
		}

		double average = getAverage(grades[student], tests);
		cout << setw(9) << setprecision(2) << fixed << average << endl;
	}
}

double GradeBook::getAverage(const int setOfGrades[], const int grades) {
	int total = 0;

	for (int grade = 0; grade < students; grade++) {
		total += setOfGrades[grade];
	}

	return static_cast<double> (total)/students;
}

int GradeBook::getMinimum() {
	int lowGrade = 100;

	for (int student = 0; student < students; student++) {
		for(int test = 0; test < tests; test++) {
			if (lowGrade > grades[student][test]) {
				lowGrade = grades[student][test];
			}
		}
	}

	return lowGrade;
}

int GradeBook::getMaximum() {
	int highGrade = 0;

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			if (highGrade < grades[student][test]) {
				highGrade = grades[student][test];
			}
		}
	}

	return highGrade;
}

void GradeBook::outputBarChart() {
	cout << endl << "Grade distribution:" << endl;

	const int frequencySize = 11;
	int frequency[frequencySize] = {};

	for (int student = 0; student < students; student++) {
		for (int test = 0; test < tests; test++) {
			frequency[grades[student][test]/10]++;
		}
	}

	for (int count = 0; count < frequencySize; count++) {
		if (count == 0) {
			cout << "  0-9: ";
		} else if (count == 10) {
			cout << "  100: ";
		} else {
			cout << count * 10 << "-" << (count*10) + 9 << ": ";
		}

		for (int stars = 0; stars < frequency[count]; stars++) {
			cout << '*';
		}

		cout << endl;
	}
}

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

class GradeBook {
	public:
		GradeBook(string name) {
			setCourseName(name);
		}

		void setCourseName(string name) {
			courseName = name;
		}

		string getCourseName() {
			return courseName;
		}

	private:
		string courseName;
};

int main()
{
	GradeBook gradeBook1("CISC101 Introduction to Computer Science");
	GradeBook gradeBook2("CISC220 Data Structures");

	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << endl;
	cout << "gradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

	return 0;
}

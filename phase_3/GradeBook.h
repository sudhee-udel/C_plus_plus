#include <string>
using std::string;

class GradeBook {
	public:
		const static int students = 10;
		const static int tests = 3;

		GradeBook(string, const int [][tests]);
		void setCourseName(string);
		string getCourseName();
		void displayMessage();
		void determineClassAverage();
		void inputGrades();
		void displayGradeReport();
		void processGrades();
		int getMinimum();
		int getMaximum();
		double getAverage(const int[], const int);
		void outputBarChart();
		void outputGrades();
	private:
		string courseName;
		int aCount;
		int bCount;
		int cCount;
		int dCount;
		int fCount;
		int grades[students][tests];
};

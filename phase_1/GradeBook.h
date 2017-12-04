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

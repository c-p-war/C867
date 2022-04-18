// B.0.4 Create main.cpp
#include <iostream>
#include <iomanip>
#include "roster.h"
#include "student.h"
#include "degree.h"

using namespace std;

int main() {

const string acceptanceCriteriaF1 = " Course Title: C867 - Scripting and Programming Applications\n Programming Language: C++\n Student ID: #001501829\n Name: Caleb Wardlaw";

std::cout<< acceptanceCriteriaF1;

// A.0 Modify the “studentData Table” to include your personal information as the last item.
const string studentData[] = 
    {
        "A1, John, Smith, John1989@gmail.com, 20, 30, 35, 40, SECURITY", 
        "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK", 
        "A3, Jack, Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE" , 
        "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY",
        "A5, Caleb, Wardlaw, cwardl4@wgu.edu, 22, 32, 42, 44, 58, SOFTWARE"
    };

    // Array named arr, with 10 position, each position has an integer, the start is a pointer, each position points to an array
    int *arr[10];
    // MUST ALWAYS INITIALIZE ARRAY POSITIONS AS NULL FIRST

    for(int i=0; i<0; i++){
        arr[i] = new int();
    }

	// Roster classRoster;
	
	// for (int i = 0; i < NUM_STUDENTS; ++i) {
	// 	classRoster.ClassRosterParse(studentData[i]);
	// }
	
	// classRoster.PrintAll();
	
	// cout << endl;
	
	// cout << "List of invalid email addresses: " << endl;
	// classRoster.PrintInvalidEmails();
	
	// cout << endl << "Average days in courses, per student: " << endl;
	// for (int i = 0; i < NUM_STUDENTS; ++i) {
	// 	classRoster.PrintAvgDaysInCourse(classRoster.classRosterArray[i]->Student::getStudentId());
	// }
	
	// classRoster.PrintByDegreeProgram(DegreeProgram::SOFTWARE);
	
	// classRoster.Remove("A3");
	// cout << endl;
	// classRoster.PrintAll();
	// cout << endl;
	// classRoster.Remove("A3");
	// cout << endl;
	
	// classRoster.~Roster();
	
	// return 0;
//     void Roster::PrintAll() {
// 	for (int i = 0; i < NUM_STUDENTS; ++i) {
// 		if (classRosterArray[i] != nullptr) {
// 			classRosterArray[i]->Student::Print();
// 		}
// 	}
// }
}
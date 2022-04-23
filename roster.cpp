// B.0.4 Create roster.cpp
#include "roster.h"
// #include <iostream>
using namespace std;
// #include <string>


Roster::Roster(){};
Roster::~Roster()
{
	int i = 0;
	for (i = 0; i < ROSTER_LENGTH; i++) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}
        /*E.3.A 
        Sets the instance variables from part D1 and updates the roster 
        */ 
			//  TODO: UW - This function would not recognize the ROSTER_LENGTH constant without the '::' on ln 22

        void Roster::add(
                string studentId, 
                string firstName, 
                string lastName, 
                string emailAddress, 
                int age, 
                int daysInCourse1, 
                int daysInCourse2, 
                int daysInCourse3,
                DegreeProgram degree
                ){
                int daysArray[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

                for (int i = 0; i < ROSTER_LENGTH; i++) {
                        if (classRosterArray[i] == nullptr) {
                                classRosterArray[i] = new Student (studentId, firstName, lastName, emailAddress, age, daysArray, degree);
                                break;
                        }
                }

}

        /* E.3.B 
        Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found 
        */
        void remove(string studentId){};

        /* E.3.C 
        Prints a complete tab-separated list of student data in the provided format: 
        
        A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. 
        
        The printAll() function should loop through all the students in classRosterArray and call the print() function for each student 
        */
        void Roster::printAll(){
					for (int i = 0; i < ROSTER_LENGTH; i++) {
						if (classRosterArray[i] != nullptr) {
							classRosterArray[i]->print();
						}
					}

				};

        /* E.3.D 
        Correctly prints a student’s average number of days in the three courses. The student is identified by the studentId parameter 
        */
        void printAverageDaysInCourse(string StudentId){};

        /* E.3.E
        Verifies student email addresses and displays all invalid email addresses to the user.

        A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
        */
        void printInvalidEmails(){};

        /* E.3.F
        Prints out student information for a degree program specified by an enumerated type
        */
        void printByDegreeProgram(DegreeProgram degree){};


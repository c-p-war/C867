// B.0.3 Create roster.h
#ifndef roster_h
#define roster_h
#include "student.h"
#include <stdio.h>
#include <string>
#include <vector>

class Roster {
    public:
			Roster();
			/*E.3.A 
			Sets the instance variables from part D1 and updates the roster 
			*/ 

			void add(
					string studentID, 
					string firstName, 
					string lastName, 
					string emailAddress, 
					int age, 
					int daysInCourse1, 
					int daysInCourse2, 
					int daysInCourse3,
					DegreeProgram degree
					);

			/* E.3.B 
			Removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found 
			*/
			void remove(string studentId);

			/* E.3.C 
			Prints a complete tab-separated list of student data in the provided format: 
			
			A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. 
			
			The printAll() function should loop through all the students in classRosterArray and call the print() function for each student 
			*/
			void printAll();

			/* E.3.D 
			Correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter 
			*/
			void printAverageDaysInCourse(string StudentId);

			/* E.3.E
			Verifies student email addresses and displays all invalid email addresses to the user.

			A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
			*/
			void printInvalidEmails();

			/* E.3.F
			Prints out student information for a degree program specified by an enumerated type
			*/
		    void printByDegreeProgram(DegreeProgram degree);

    private:

			vector<Student*> classRosterArray;
};

#endif /* roster_h */
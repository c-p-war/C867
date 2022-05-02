#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

/* F.  Demonstrate the program’s required functionality by adding a main() function in main.c, which will contain the required function calls to achieve the following results: */
int main() {
    const int studentCount = 5;
    /* A.  Modify the “studentData Table” to include your personal information as the last item.*/
    const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Caleb,Wardlaw,cwardl4@wgu.edu,30,28,15,10,SOFTWARE"
    };

    /* 1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.*/
    cout << "Course Title: C867 Scripting and Programming Applications" << endl;
    cout << "Programming Language: C++" << endl;
    cout << "WGU student Id: 001501829" << endl;
    cout << "Name: Caleb Wardlaw" << endl;
    cout << endl;

    /* 2.  Create an instance of the Roster class called classRoster.*/
    Roster classRoster;

    /* 3.  Add each student to classRoster. */
    for (int i = 0; i < studentCount; i++) {
            classRoster.parseData(studentData[i]);
    }

    /* 4.  Convert the following pseudo code to complete the rest of the  main() function:*/
    classRoster.printAll();
    cout << endl;

    cout << "Invalid Email Addresses" << endl;
    classRoster.printInvalidEmails();
    cout << endl;

    cout << "Average Days In Course" << endl;
    for (int i = 0; i < studentCount; i++) {
            classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }
    cout << endl;

    cout << "List of Software Students" << endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;

    classRoster.remove("A3");
    cout << endl;

    classRoster.printAll();
    cout << endl;

    classRoster.remove("A3");
    cout << endl;
    
    /* Memory release*/
    return 0;

};

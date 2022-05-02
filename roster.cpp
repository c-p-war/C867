#pragma once
#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

// Parsing data and adding to the array
void Roster::parseData(string studentData) {
		int rhs = studentData.find(",");
		string studentID = studentData.substr(0, rhs);

		int lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string firstName = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string lastName = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		string emailAddress = studentData.substr(lhs, rhs - lhs);

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int age = stoi(studentData.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysInCourse1 = stoi(studentData.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysInCourse2 = stoi(studentData.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		int daysInCourse3 = stoi(studentData.substr(lhs, rhs - lhs));

		lhs = rhs + 1;
		rhs = studentData.find(",", lhs);
		DegreeProgram degreeprogram;
		string degreeString = studentData.substr(lhs, rhs - lhs);
		if (degreeString == "SECURITY") {
				degreeprogram = DegreeProgram::SECURITY;
		}
		else if (degreeString == "NETWORK") {
				degreeprogram = DegreeProgram::NETWORK;
		}
		else if (degreeString == "SOFTWARE") {
				degreeprogram = DegreeProgram::SOFTWARE;
		}

		add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeprogram);
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {
		int daysInCourse[Student::DaysInCourseArraySize]{daysInCourse1, daysInCourse2, daysInCourse3};
		classRosterArray[++index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeprogram);
}

void Roster::remove(string studentID) {
		bool isFound = false;
		for (i = 0; i <= Roster::index; i++) {
						if (classRosterArray[i]->getStudentID() == studentID) {
								isFound = true;
								if (i < numStudents - 1) {
										Student* tempArr = classRosterArray[i];
										classRosterArray[i] = classRosterArray[numStudents - 1];
										classRosterArray[numStudents - 1] = tempArr;
								}
								Roster::index--;
								
								Student* tempArr = classRosterArray[Roster::index];
								classRosterArray[Roster::index] = classRosterArray[Roster::index - 1];
								classRosterArray[Roster::index - 1] = tempArr;
						}
		}
		if (isFound) {
				cout << "Removed Student " << studentID << endl;
		}
		else {
				cout << "Did not find Student " << studentID << endl;
		}
}

void Roster::printAll() {
		cout << "Student data list" << endl;
		for (i = 0; i <= Roster::index; i++) {
				classRosterArray[i]->print();
		}
}

void Roster::printAverageDaysInCourse(string studentID) {
		for (i = 0; i <= Roster::index; i++) {
				if (classRosterArray[i]->getStudentID() == studentID) {
						cout << studentID << " | ";
						cout << ((classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2]) / 3);
						cout << endl;
				}

		}
}

void Roster::printInvalidEmails() {
		bool isInvalid = false;
		for (i = 0; i <= Roster::index; i++) {
				string emailAddress = (classRosterArray[i]->getEmailAddress());
				string studentID = (classRosterArray[i]->getStudentID());
				if (emailAddress.find('@') == string::npos || emailAddress.find('.') == string::npos || emailAddress.find(' ') != string::npos) {
						isInvalid = true;
						cout << studentID << " | "<< emailAddress << endl;
				}
				else if (!isInvalid) {
						cout << "No Invalid Email Addresses" << endl;
				}
		}
}

void Roster::printByDegreeProgram(DegreeProgram degreeprogram) {
		for (i = 0; i <= Roster::index; i++) {
				if (Roster::classRosterArray[i]->getDegreeProgram() == degreeprogram) {
						classRosterArray[i]->print();
				}
		}
}

Roster::~Roster() {
		for (i = 0; i < numStudents; ++i) {
				delete classRosterArray[i];
				classRosterArray[i] = nullptr;
		}
}

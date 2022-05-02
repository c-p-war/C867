#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;
/* .  Create the class Student  in the files student.h and student.c, which includes each of the following variables:
	 •  student ID
	 •  first name
	 •   last name
	 •  email address
	 •  age
	 •  array of number of days to complete each course
	 •  degree program */
Student::Student() {
		this->studentID = "";
		this->firstName = "";
		this->lastName = "";
		this->emailAddress = "";
		this->age = 0;
		for (i = 0; i < DaysInCourseArraySize; ++i) {
				this->daysInCourse[i] = 0;
		}
		this->degreeprogram = DegreeProgram::SECURITY;
}

/* Create each of the following functions in the Student class:
d.  constructor using all of the input parameters provided in the table */
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeprogram) {
		this->studentID = studentID;
		this->firstName = firstName;
		this->lastName = lastName;
		this->emailAddress = emailAddress;
		this->age = age;
		for (i = 0; i < DaysInCourseArraySize; ++i) {
				this->daysInCourse[i] = daysInCourse[i];
		}
		this->degreeprogram = degreeprogram;
}

Student::~Student() {}

/* Create each of the following functions in the Student class:
 a.  an accessor (i.e., getter) for each instance variable from part D1 */
string Student::getStudentID() {
		return studentID;
}
string Student::getFirstName() {
		return firstName;
}
string Student::getLastName() {
		return lastName;
}
string Student::getEmailAddress() {
		return emailAddress;
}
int Student::getAge() {
		return age;
}
int* Student::getDaysInCourse() {
		return daysInCourse;
}
DegreeProgram Student::getDegreeProgram() {
		return degreeprogram;
}

/* Create each of the following functions in the Student class:
b.  a mutator (i.e., setter) for each instance variable from part D1 */
void Student::SetStudentID(string idToSet) {
		this->studentID = idToSet;
}
void Student::SetFirstName(string firstNameToSet) {
		this->firstName = firstNameToSet;
}
void Student::SetLastName(string lastNameToSet) {
		this->lastName = lastNameToSet;
}
void Student::SetEmailAddress(string emailAddressToSet) {
		this->emailAddress = emailAddressToSet;
}
void Student::SetAge(int ageToSet) {
		this->age = ageToSet;
}
void Student::SetDaysInCourse(int daysToSet[]) {
		for (i = 0; i < DaysInCourseArraySize; i++) {
				this->daysInCourse[i] = daysToSet[i];
		}
}
void Student::SetDegreeProgram(DegreeProgram degreeToSet) {
		degreeprogram = degreeToSet;
}

/* Create each of the following functions in the Student class:
 e.  print() to print specific student data */
void Student::print() {
		cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Email Address: " << getEmailAddress() << "\t" << "Age: " << getAge() << "\t";
		cout << "daysInCourse:  {" << getDaysInCourse()[0] << ", " << getDaysInCourse()[1] << ", " << getDaysInCourse()[2] << "} " << "Degree Program: ";
		cout << degreeString[(int)getDegreeProgram()] << endl;
}

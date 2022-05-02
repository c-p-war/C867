#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {

public:
		Student();
		Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], DegreeProgram degreeprogram);
		/* GETTERS aka accessors*/
		string getStudentID();
		string getFirstName();
		string getLastName();
		string getEmailAddress();
		int getAge();
		int* getDaysInCourse();
		DegreeProgram getDegreeProgram();
		/* SETTERS aka mutators*/
		void SetStudentID(string idToSet);
		void SetFirstName(string firstNameToSet);
		void SetLastName(string lastNameToSet);
		void SetEmailAddress(string emailAddressToSet);
		void SetAge(int ageToSet);
		void SetDaysInCourse(int daysToSet[]);
		void SetDegreeProgram(DegreeProgram degreeToSet);

		void print();

		const static int DaysInCourseArraySize = 3;

		~Student();

private:
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysInCourse[DaysInCourseArraySize];
		DegreeProgram degreeprogram;
		int i = 0;
};

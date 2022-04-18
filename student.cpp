// B.0.2 Create student.cpp
#include "student.h"
#include "degree.h"
#include <iostream>
#include <string>
using namespace std;
// Initialize blank record
Student::Student() {
    this->studentId = "";
    this->firstName = "";
    this->lastName = "";
    this->emailAddress = "";
    this->age = 0;
    for (int i = 0; i < MAX_COURSES; ++i) {
        this->daysInCourse[i] = 0;
    }
    // TODO: Verify this will be blank
    this->degree = degree;
}

// D.2 Constructor
Student::Student(
    string studentId,
    string firstName, 
    string lastName, 
    string emailAddress, 
    int age,
    int daysInCourse[], 
    DegreeProgram degree
    ) {
        this->studentId = studentId;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        for (int i = 0; i < MAX_COURSES; ++i) {
            this->daysInCourse[i] = daysInCourse[i];
        }
        this->degree = degree;
    // setId(studentId);
    // setFirstName(firstName);
    // setLastName(lastName);
    // setEmail(emailAddress);
    // setAge(age);
    // setDays(days);
    // setDegree(degree);
}

Student::~Student(){}

// D.2 Mutator / Setters
void Student::setId(string studentId){
    this -> studentId = studentId;
}

void Student::setFirstName(string firstName){
    this -> firstName = firstName;
}

void Student::setLastName(string lastName){
    this -> lastName = lastName;
}

void Student::setEmail(string emailAddress){
    this -> emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this -> age = age;
}
// TODO: Finish setDays
void Student::setDays(int daysToSet[]) {
    for(int i=0; i < MAX_COURSES; ++i){
        this -> daysInCourse[i] = daysToSet[i];
    }
}

void Student::setDegree(DegreeProgram degree){
    this -> degree = degree;
}

// D.2 Accessors / Getters
string Student::getStudentId() {
    return studentId;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmail() {
    return emailAddress;
}

int Student::getAge() {
    return age;
}
// TODO: Finish getDays

int* Student::getDays() {
    return daysInCourse;
}

DegreeProgram Student::getDegree() {
    return degree;
}

// D.2.E print() to print specific student data
// TODO: Finish Print
void Student::print() {
    std::cout << 
    "First Name: " << firstName << "\n" <<
    "Last Name: " << lastName << "\n";
}

Student::~Student() {}

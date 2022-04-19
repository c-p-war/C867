// B.0.2 Create student.cpp
#include "student.h"
#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

// D.2 Constructor
Student::Student(string studentId, string firstName, string lastName,
    string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree) {
    this->studentId = studentId;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->days = new int[3];
    this->days[0] = daysInCourse1;
    this->days[1] = daysInCourse2;
    this->days[2] = daysInCourse3;
    this->degree = degree;
}

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

void Student::setDays(int daysInCourse1, int daysInCourse2, int daysInCourse3) {
    this->days = new int[3];
    this->days[0] = daysInCourse1;
    this->days[1] = daysInCourse2;
    this->days[2] = daysInCourse3;
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

int* Student::getDays() {
    return days;
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

// B.0.2 Create student.h
#ifndef student_h
#define student_h
#include "degree.h"
#include <stdio.h>
#include <string>
using namespace std;

class Student {
    public:
        Student();
        // D.2.D Constructor
        Student(
            string studentId,
            string firstName, 
            string lastName, 
            string emailAddress, 
            int age, 
            int days[], 
            // TODO: Define enumerated type 
            DegreeProgram degree
        );       

        ~Student();

        // D.2.B Getter / Mutator
        string getStudentId();
        string getFirstName();
        string getLastName();
        string getEmail();
        int getAge();
        int* getDays();
        DegreeProgram getDegree();

        // D.2.B Setter / Accesser
        void setId(string studentId);
        void setFirstName(string firstName);
        void setLastName(string lastName);
        void setEmail(string emailAddress);
        void setAge(int age);
        void setDays(int daysToSet[]);
        void setDegree(DegreeProgram degree);


        // // D.2.E print() to print specific student data
        void print(); 
        // TODO: Rename consts
        const static int MAX_COURSES = 3;


    // D.1 Create the class Student  in the files student.h and student.cpp, which includes each of the following variables
    private:
        string studentId;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        // int* days;
        // TODO: Refactor hard coding
        int daysInCourse[MAX_COURSES];
        DegreeProgram degree;

};

#endif /* student_h */
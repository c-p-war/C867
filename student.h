// B.0.2 Create student.h
// Helps compile correctly, defines the beginning and the end of the definition file
#ifndef student_h
#define student_h
#include "degree.h"
#include <string>

class Student {
    public:
        // D.2.D Constructor
        // Define the parameters for the constructor
        Student(string studentId, string firstName, string lastName,
            string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degree);

        // Constructor is called to instantiate an object, an object is an instantiation of a class
        // Think of a constructor like a variable, for a variable you delcare a data type, for a constructor
        // you declare a class.
        // learncpp.com 

        // This is the constructor because it has the same name as the class

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
        void setDays(int daysInCourse1, int daysInCourse2, int daysInCourse3);
        void setDegree(DegreeProgram degree);


        // // D.2.E print() to print specific student data
        void print();

    // D.1 Create the class Student  in the files student.h and student.cpp, which includes each of the following variables
    private:
        string studentId;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int* days;
        DegreeProgram degree;

};

#endif /* student_h */
/* B.  Create a C++ project in your integrated development environment (IDE) with the following files: */
#pragma once
#include <iostream>
using namespace std;

/* C.  Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.*/
enum DegreeProgram {
    SECURITY,
    NETWORK,
    SOFTWARE
};
static const string degreeString[] = {"SECURITY", "NETWORK", "SOFTWARE"};

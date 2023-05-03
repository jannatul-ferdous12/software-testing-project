#include "student.h"
#include <iostream>

using namespace std;

Student::Student(string n, int a, int id) : Person(n, a) {
    studentID = id;
}

void Student::displayID() {
    cout << "My student ID is " << studentID << "." << endl;
}

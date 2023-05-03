#include "course.h"
#include <iostream>

using namespace std;

Course::Course(string n, Teacher* t) {
    name = n;
    teacher = t;
}

void Course::displayCourseInfo() {
    cout << "Course name: " << name << endl;
    cout << "Teacher: " << teacher->name << endl;
    cout << "Subject: " << teacher->subject << endl;
}

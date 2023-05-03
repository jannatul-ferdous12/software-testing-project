#ifndef COURSE_H
#define COURSE_H

#include "teacher.h"
#include <string>

using namespace std;

class Course {
public:
    string name;
    Teacher* teacher;
    Course(string n, Teacher* t);
    void displayCourseInfo();
};

#endif

#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "course.h"

using namespace std;

class University {
public:
    string name;
    Course* courses[5];
    University(string n);
    void addCourse(Course* c);
};

#endif

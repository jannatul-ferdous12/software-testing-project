#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
public:
    int studentID;
    Student(string n, int a, int id);
    void displayID();
};

#endif

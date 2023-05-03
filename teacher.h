#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"
#include <string>

using namespace std;

class Teacher : public Person {
public:
    string subject;
    Teacher(string n, int a, string s);
    void teach();
};

#endif

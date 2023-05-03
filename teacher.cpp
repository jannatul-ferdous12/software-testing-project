#include "teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher(string n, int a, string s) : Person(n, a) {
    subject = s;
}

void Teacher::teach() {
    cout << "I'm a teacher of " << subject << "." << endl;
}

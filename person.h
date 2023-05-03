#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a);
    void introduce();
};

#endif

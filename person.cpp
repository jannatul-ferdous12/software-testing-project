#include "person.h"
#include <iostream>

using namespace std;

Person::Person(string n, int a) {
    name = n;
    age = a;
}

void Person::introduce() {
    cout << "My name is " << name << " and I'm " << age << " years old." << endl;
}

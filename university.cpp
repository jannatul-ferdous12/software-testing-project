#include "university.h"

University::University(string n) {
    name = n;
    for (int i = 0; i < 5; i++) {
        courses[i] = NULL;
    }
}

void University::addCourse(Course* c) {
    for (int i = 0; i < 5; i++) {
        if (courses[i] == NULL) {
            courses[i] = c;
            break;
        }
    }
}

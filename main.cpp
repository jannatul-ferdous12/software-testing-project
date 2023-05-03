#include <iostream>
#include <string>


using namespace std;

class Person {
public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void introduce() {
        cout << "My name is " << name << " and I'm " << age << " years old." << endl;
    }
};

class Student : public Person {
public:
    int studentID;
    Student(string n, int a, int id) : Person(n, a) {
        studentID = id;
    }
    void displayID() {
        cout << "My student ID is " << studentID << "." << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    Teacher(string n, int a, string s) : Person(n, a) {
        subject = s;
    }
    void teach() {
        cout << "I'm a teacher of " << subject << "." << endl;
    }
};

class Course {
public:
    string name;
    Teacher* teacher;
    Course(string n, Teacher* t) {
        name = n;
        teacher = t;
    }
    void displayCourseInfo() {
        cout << "Course name: " << name << endl;
        cout << "Teacher: " << teacher->name << endl;
        cout << "Subject: " << teacher->subject << endl;
    }
};

class University {
public:
    string name;
    Course* courses[5];
    University(string n) {
        name = n;
        for (int i = 0; i < 5; i++) {
            courses[i] = NULL;
        }
    }
    void addCourse(Course* c) {
        for (int i = 0; i < 5; i++) {
            if (courses[i] == NULL) {
                courses[i] = c;
                break;
            }
        }
    }
};

void testClassesAndFunctions() {
    Student* s1 = new Student("John", 20, 12345);
    s1->introduce();
    s1->displayID();
    Teacher* t1 = new Teacher("Smith", 35, "Math");
    t1->introduce();
    t1->teach();
    Course* c1 = new Course("Calculus", t1);
    c1->displayCourseInfo();
    University* u1 = new University("ABC University");
    u1->addCourse(c1);
}

int main() {
    testClassesAndFunctions();
    return 0;
}

#include <string>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "University.h"

// Tests the introduce() method of the Person class
TEST(PersonTest, Introduce) {
    Person p("John", 20);
    std::string expectedOutput = "My name is John and I'm 20 years old.\n";
    testing::internal::CaptureStdout();
    p.introduce();
    std::string actualOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(expectedOutput, actualOutput);
}

// Tests the displayID() method of the Student class
TEST(StudentTest, DisplayID) {
    Student s("John", 20, 12345);
    std::string expectedOutput = "My student ID is 12345.\n";
    testing::internal::CaptureStdout();
    s.displayID();
    std::string actualOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(expectedOutput, actualOutput);
}

// Tests the teach() method of the Teacher class
TEST(TeacherTest, Teach) {
    Teacher t("Smith", 35, "Math");
    std::string expectedOutput = "I'm a teacher of Math.\n";
    testing::internal::CaptureStdout();
    t.teach();
    std::string actualOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(expectedOutput, actualOutput);
}

// Tests the displayCourseInfo() method of the Course class
TEST(CourseTest, DisplayCourseInfo) {
    Teacher t("Smith", 35, "Math");
    Course c("Calculus", &t);
    std::string expectedOutput = "Course name: Calculus\nTeacher: Smith\nSubject: Math\n";
    testing::internal::CaptureStdout();
    c.displayCourseInfo();
    std::string actualOutput = testing::internal::GetCapturedStdout();
    EXPECT_EQ(expectedOutput, actualOutput);
}

// Tests the addCourse() method of the University class
TEST(UniversityTest, AddCourse) {
    Teacher t("Smith", 35, "Math");
    Course c("Calculus", &t);
    University u("ABC University");
    u.addCourse(&c);
    EXPECT_EQ(u.courses[0], &c);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TEST();
}

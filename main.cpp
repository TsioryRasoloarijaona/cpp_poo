#include <iostream>

#include "Student.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {


    Student* students[3] ;
    students[0] = Student::create_student("carlos" , 20);
    students[1] = Student::create_student("carla" , 16 , 12.5) ;
    students[2] = Student::create_student("Ami" , 12);

    for (Student* student : students) {
       student->show_student(student);
    }

    for (int i = 0 ; i < 3 ; i++) {
       students[i]->destoy_student(students[i]);
    }
    return 0;
}

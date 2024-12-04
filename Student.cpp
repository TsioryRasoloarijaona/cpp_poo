#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(const string &name, int age, double note) : name(name), age(age), note(note) {

}

void Student::add_student(const string &s_name, int s_age, double s_note) {
    name = s_name ;
    age = s_age ;
    note = s_note ;
}

void Student::show_student(const Student* student) {
    cout<< "name : " << student->name <<
     "/ age : " << student->age <<
     "/ note : " << student->note << endl ;
}

Student* Student::create_student(const string &name, int age) {
    Student* student = new Student(name , age , 0.0) ;
    return student ;
}

Student *Student::create_student(const string &name, int age, double note) {
    Student* student = new Student(name , age , note ) ;
    return student ;
}

void Student::destoy_student(const Student *student) {
    delete student ;
}






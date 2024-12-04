//
// Created by tsiory on 12/3/24.
//
#include <string>
#include <iostream>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;


class Student {

public :
    Student() = default ;

    Student(const string &name, int age, double note = 0.0) ;


private :
    string name ;
    int age ;
    double note ;

public:

    void add_student ( const string& s_name  ,  int s_age , double s_note ) ;

public :
    void show_student (const Student* student) ;

public:
   static  Student* create_student( const string& name ,  int age ,  double note ) ;

public:
    void destoy_student (const Student* student) ;

public:
    static Student* create_student(const string& name , int age) ;

};


#endif //STUDENT_H

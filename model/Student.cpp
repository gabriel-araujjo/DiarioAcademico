//
// Created by gabriel on 11/10/15.
//
#include <iostream>
#include "Student.h"

using model::Student;
using std::string;
using namespace std;

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}

string Student::getEnrollment() {
    return enrollment;
}

void Student::setEnrollment(int &enrollment) {
    this->enrollment = enrollment;
}

void Student::addGrade(float grade) {
    grades.push_back(grade);
}

void setGrade(int gradePos, float grade){

}

list<float> Student::getGrades() {
    return std::list<float>();
}

void Student::setGrade(int gradePos, float grade) {

}

int menu(){
    int x;
    do{
        cin >> x;
    }while(x!=0 && x!=1);
    return x;
}


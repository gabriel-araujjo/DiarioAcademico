//
// Created by gabriel on 11/10/15.
//

#include "Student.h"

using model::Student
using std::string

string Student::getName() {
    return name;
}

void Student::setName(string &name) {
    this->name = name;
}

string Student::getEnrollment() {
    return enrollment;
}

void Student::setEnrollment(string &enrollment) {
    this->enrollment = enrollment;
}

void Student::addGrade(float grade) {
    grades.push_back(grade);
}

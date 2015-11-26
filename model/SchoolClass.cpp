//
// Created by henrique on 19/11/15.
//

#include "SchoolClass.h"

using model::Student;
using model::SchoolClass;

const list<Student> &SchoolClass::getStudents() const {
    return students;
}

void SchoolClass::setStudents(const list<Student> &students) {
    this->students = students;
}

const string &SchoolClass::getSchoolName() const {
    return schoolName;
}



const string &SchoolClass::getName() const {
    return name;
}

void SchoolClass::setName(const string &name) {
    this->name = name;
}

const list<float> &SchoolClass::getMeanCalc() const {
    return meanCalc;
}

void SchoolClass::setMeanCalc(const list<float> &meanCalc) {
    this->meanCalc = meanCalc;
}

const string &SchoolClass::getSchedule() const {
    return schedule;
}

void SchoolClass::setSchedule(const string &schedule) {
    this->schedule = schedule;
}


string model::Attachment::getPath() {
    return path;
}

bool model::Attachment::isInternal() {
    return false;
}

void model::Attachment::setInternal(bool internal) {

}

void model::Attachment::setPath(string path) {

}

void SchoolClass::setSchoolName(const string &schoolName) const {

}

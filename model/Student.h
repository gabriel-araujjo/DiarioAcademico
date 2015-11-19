//
// Created by gabriel on 11/10/15.
//

#ifndef DIARIOACADEMICO_STUDENT_H
#define DIARIOACADEMICO_STUDENT_H

#include <string>
#include <list>

using std::string;
using std::list;
using namespace std;

namespace model {

    class Student {
    public:
        string name;
        string enrollment;
        list<float> grades;

    public:

        string getName();

        void setName(string name);

        string getEnrollment();

        void setEnrollment(int &enrollment);

        void addGrade(float grade);

        list<float> getGrades();

        void setGrade(int gradePos, float grade);


    };


}

int menu();


#endif //DIARIOACADEMICO_STUDENT_H

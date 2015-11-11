//
// Created by gabriel on 11/10/15.
//

#ifndef DIARIOACADEMICO_STUDENT_H
#define DIARIOACADEMICO_STUDENT_H

#include <string>
#include <list>

using std::string
using std::list

namespace model {

    class Student {
    private:
        string name;
        string enrollment;
        list<float> grades;

    public:

        string getName();

        void setName(string &name);

        string getEnrollment();

        void setEnrollment(string &enrollment);

        void addGrade(float grade);

        list<float> getGrades();

        void setGrade(int gradePos, float grade);


    };

}

#endif //DIARIOACADEMICO_STUDENT_H

//
// Created by henrique on 19/11/15.
//

#ifndef DIARIOACADEMICO_SCHOOLCLASS_H
#define DIARIOACADEMICO_SCHOOLCLASS_H

#include "Student.h"
using model::Student;
using std::list;

namespace model {
    class Attachment{
        string path;
        bool internal;
    public:
        string getPath();

        bool isInternal();

        void setInternal(bool internal);

        void setPath(string path);
    };
    class SchoolClass {

    private:
        list<Student> students;
        string schoolName;
        string name;
        list<float> meanCalc;
        string schedule;
    public:
        const list<Student> &getStudents() const;

        void setStudents(const list<Student> &students);

        const string &getSchoolName() const ;

        void setSchoolName(const string &schoolName) const;

        const string &getName() const;

        void setName(const string &name);

        const list<float> &getMeanCalc() const;

        void setMeanCalc(const list<float> &meanCalc);

        const string &getSchedule() const;

        void setSchedule(const string &schedule);



    };



}


#endif //DIARIOACADEMICO_SCHOOLCLASS_H

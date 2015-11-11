//
// Created by gabriel on 11/10/15.
//

#ifndef DIARIOACADEMICO_ATTENDANCE_H
#define DIARIOACADEMICO_ATTENDANCE_H

#include <ctime>

namespace model {

    class Attendance {
    private:
        time_t date;
        bool attendance;
    public:
        time_t getDate();

        void setDate(time_t date);

        bool getAttendance();

        void setAttendance(bool attendance);

    };

}


#endif //DIARIOACADEMICO_ATTENDANCE_H

cmake_minimum_required(VERSION 3.3)
project(DiarioAcademico)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp model/Student.cpp model/Student.h model/Attendance.cpp model/Attendance.h widget/studentclass/CreateWidget.cpp widget/studentclass/CreateWidget.h test.cpp model/SchoolClass.cpp model/SchoolClass.h model/SuperEasyJSON/json.cpp model/SuperEasyJSON/json.h)
add_executable(DiarioAcademico ${SOURCE_FILES})
#include <iostream>
#include "model/Student.h"
#include "model/Attendance.h"

using namespace std;
using std::string;
using std::list;
using namespace model;

int main() {
    Student student = model::Student();
    int matricula;
    int opcao;
    string nome;
    opcao=menu();
    while(opcao!=0){
            cout << "matricula: ";
            cin >> matricula;
            cout << "nome: ";
            cin >> nome;
            student.setName(nome);
            student.setEnrollment(matricula);
            student.getEnrollment();
            student.getName();
        opcao=menu();   //chama o menu de opções
    }
    return 0;
}
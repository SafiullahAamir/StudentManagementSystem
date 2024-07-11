#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

struct StudentRecord {
    std::string name;
    std::string f_name;
    std::string roll_no;
    std::string ph_no;
    std::string programme;
    std::string section;
};

extern StudentRecord arr[20];
extern int total;
extern std::string Path;

void enter();
void remove();
void profile();
void fee();
void time_table();
void cgpa();

void role_validation(char &choice);
void admin_validation(char &opt);
void student_validation(char &option);
void degree_validation(char &Choice);


#endif // FUNCTIONS_H_INCLUDED

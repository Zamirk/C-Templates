
#ifndef UNTITLED2_EMPLOYEE_H
#define UNTITLED2_EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
public:
    Employee(int a, string b);
    string getName();
    int getSalary();
    bool operator< (const Employee & rop);
    bool operator> (const Employee &rop);
private:
    int salary;
    string name;
};


#endif //UNTITLED2_EMPLOYEE_H

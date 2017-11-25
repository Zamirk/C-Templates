
#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int a, string b){
    salary = a;
    name = b;
}

bool Employee::operator< (const Employee & rop){
    return (salary < rop.salary);
}
bool Employee::operator> (const Employee &rop){
    return (salary > rop.salary);
}

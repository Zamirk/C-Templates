#include <iostream>
#include "storeArray.h"
#include "triple.h"
#include "Employee.h"

using namespace std;

//template <typename T, int length> T{

int main() {

    cout << "Doubles data." << endl;
    double newArray[]{};
    storeArray<double> myData(newArray,3);
    myData.addEntry(10.1);
    myData.addEntry(20.2);
    myData.addEntry(30.3);
    myData.addEntry(40.4);

    cout << "The total amount in the array is " <<myData.totalvalue() << endl;

    cout << "Int data." << endl;
    Triple<int> intTriple(1,2,3);
    cout << "The min is " << intTriple.minimum() << "." << endl;
    cout << "The max is " << intTriple.maximum() << "." << endl;
    cout << "The median is " << intTriple.median() << "." << endl;

    cout << "Char data." << endl;
    Triple<char> charTriple('a','b','c');
    cout << "The min is " << charTriple.minimum() << "." << endl;
    cout << "The max is " << charTriple.maximum() << "." << endl;
    cout << "The median is " << charTriple.median() << "." << endl;

    cout << "Employee data." << endl;
    Employee emp1(120000,"Damir");
    Employee emp2(90000,"Zamir");
    Employee emp3(10000,"Samir");

    Triple<Employee> empTriple(emp1,emp2,emp3);
    return 0;
}
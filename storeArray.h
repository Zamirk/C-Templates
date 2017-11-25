
#ifndef UNTITLED2_STOREARRAY_H
#define UNTITLED2_STOREARRAY_H
#include <iostream>
using namespace std;

template <typename T>
    class storeArray {
    public:
        storeArray(T a[],int);
        void addEntry(T);
        T totalvalue();
    private:
        int noOfElements = 0;
        int size;
        T *arrayOfValues;   //Array of type T
        T total;
    };



#endif //UNTITLED2_STOREARRAY_H

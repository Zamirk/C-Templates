
#include "storeArray.h"
#include <iostream>
using namespace std;

template <typename T>
storeArray<T>::storeArray(T newArray[],int length){
    size = length;
    arrayOfValues = new T[length];
}

template<typename T>
void storeArray<T>::addEntry(T newEntry) {
    if(noOfElements<size){
        int pos = noOfElements+1;
        arrayOfValues[noOfElements] = newEntry;
        noOfElements++;
    }else{
        cout << "The array is now full." << endl;
    }
}

template<typename T>
T storeArray<T>::totalvalue() {     //Returning total value
    for(int i =0; i < noOfElements; i++){
        total+=arrayOfValues[i];
    }
    return total;
}

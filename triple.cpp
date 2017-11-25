
#include "triple.h"

template <typename T>
Triple<T>::Triple(T a, T b, T c){
    myFirstElement = a;
    mySecondElement = b;
    myThirdElement = c;
}

template<typename T>
T Triple<T>::maximum() {
    T value;
    if(myFirstElement>mySecondElement&&myFirstElement>myThirdElement){
        value = myFirstElement;
    }else if(mySecondElement>myFirstElement&&mySecondElement>myThirdElement){
        value = mySecondElement;
    }else{
        value = myThirdElement;
    }
    return value;
}

template<typename T>
T Triple<T>::minimum() {
    T value;
    if(myFirstElement<mySecondElement&&myFirstElement<myThirdElement){
        value = myFirstElement;
    }else if(mySecondElement<myFirstElement&&mySecondElement<myThirdElement){
        value = mySecondElement;
    }else{
        value = myThirdElement;
    }
    return value;
}

template<typename T>
T Triple<T>::median() {
    T value, max, min;
    min = minimum();
    max = maximum();

    value = myFirstElement;
    if(value == max||value == min){
        value = mySecondElement;
        if(value == max||value == min){
            value = myThirdElement;
        }
    }
    return value;
}
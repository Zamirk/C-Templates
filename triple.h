#ifndef UNTITLED2_TRIPLE_H
#define UNTITLED2_TRIPLE_H

template <typename T>
class Triple {
public:
    Triple(T, T, T);    //Constructor
    T maximum();
    T minimum();
    T median();

private:                //Three elements
    T myFirstElement;
    T mySecondElement;
    T myThirdElement;
};

#endif //UNTITLED2_TRIPLE_H

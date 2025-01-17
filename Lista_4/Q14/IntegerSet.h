#pragma once

#include <iostream>

using std::cout, std::endl;

class IntegerSet{

    friend IntegerSet unionOfSets(IntegerSet &c1, IntegerSet &c2);
    friend IntegerSet intersectionOfSets(IntegerSet &c1, IntegerSet &c2);

public:

    IntegerSet();
    IntegerSet(int conju[], int tam);

    void insertElement(int);

    void deleteElement(int);

    void print() const;

private:
    int arr[100];    
};
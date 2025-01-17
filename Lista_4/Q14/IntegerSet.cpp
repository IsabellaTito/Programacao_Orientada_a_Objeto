#include "IntegerSet.h"

IntegerSet unionOfSets(IntegerSet &c1, IntegerSet &c2){
    IntegerSet resul;
    for(int i=0; i<100; i++){
        if(c1.arr[i] == 1 || c2.arr[i] == 1){
            resul.arr[i] = 1;
        }
    }
    return resul;
}

IntegerSet intersectionOfSets(IntegerSet &c1, IntegerSet &c2){
    IntegerSet resul;
    for(int i=0; i<100; i++){
        if(c1.arr[i] == 1 && c2.arr[i] == 1){
            resul.arr[i] = 1;
        }
    }
    return resul;
}

IntegerSet::IntegerSet(){
    for(int i=0; i<100;i++){
        arr[i] = 0;
    }
}

IntegerSet::IntegerSet(int conju[], int tam){
    for(int i=0; i<tam; i++){
        arr[conju[i]] = 1;
    }
}

void IntegerSet::insertElement(int k){
    arr[k] = 1;
}

void IntegerSet::deleteElement(int k){
    arr[k] = 0;
}

void IntegerSet::print() const{
    for(int i=0; i<100; i++){
        if(arr[i] == 1){
            cout << i <<" ";            
        }
    }
    cout<<endl;
}
#include <iostream>
#include "IntegerSet.h"

using std::cout, std::endl;

int main(){

    int c1[] = {1,3,5,7,9,23,56,77,98}, c2[] = {3,5,44,78,32,98,99};
    IntegerSet A{c1,9}, B, C;

    cout <<"A"<<endl;
    A.print();
    cout <<"B Vazio"<<endl;
    B.print();

    cout <<"Inserindo elementos em B:"<<endl;
    B.insertElement(3);
    B.insertElement(5);
    B.insertElement(44);
    B.insertElement(78);
    B.insertElement(88);
    B.insertElement(32);
    B.insertElement(98);
    B.insertElement(99);
    B.insertElement(2);

    B.print();

    cout <<"Deletando elementos em B:"<<endl;

    B.deleteElement(2);
    B.deleteElement(88);

    B.print();

    cout <<"Union Of Sets"<<endl;

    C = unionOfSets(A,B);

    C.print();

    cout <<"Intersection Of Sets"<<endl;

    C = intersectionOfSets(A,B);

    C.print();
    
    return 0;
}
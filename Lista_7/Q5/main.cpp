#include <iostream>
#include "IntegerSet.h"

using std::cout, std::endl;

int main(){

    int c1[] = {1,3,5,7,9,23,56,77,98}, c2[] = {3,5,44,78,32,98,99};
    IntegerSet A{c1,9}, B, C;

    cout <<"A"<<endl;
    cout<<A;
    cout <<"B Vazio"<<endl;
    cout<<B;

    cout <<"Inserindo elementos em B:"<<endl;
    B<<3;
    B<<5;
    B<<44;
    B<<78;
    B<<88;
    B<<32;
    B<<98;
    B<<99;
    B<<2;

    cout<<B;

    cout <<"Deletando elementos em B:"<<endl;

    B>>2;
    B>>88;

    cout<<B;

    cout <<"Union Of Sets"<<endl;

    C = A|B;

    cout<<C;

    cout <<"Intersection Of Sets"<<endl;

    C = A&B;

    cout<<C;
    
    return 0;
}
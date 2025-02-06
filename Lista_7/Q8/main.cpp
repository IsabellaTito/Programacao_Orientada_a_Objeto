#include "Complex.h"

int main(){

    Complex c1{3,2},c2{1,4},c3{4,-5},c4;

    cout<<"C1 = ";
    cout<<c1;
    cout<<"C2 = ";
    cout<<c2;
    cout<<"C3 = ";
    cout<<c3;

    c4 = c1+c2;
    cout<<"C4=C1+C2"<<endl;
    cout<<"C4 = ";
    cout<<c4;

    c2+=c3;
    cout<<"C2+=C3"<<endl;
    cout<<"C2 = ";
    cout<<c2;

    c4=c1-c2;
    cout<<"C4=C1-C2"<<endl;
    cout<<"C4 = ";
    cout<<c4;

    c3-=c2;
    cout<<"C3-=C2"<<endl;
    cout<<"C3 = ";
    cout<<c3;

/*
    c1++;
    cout<<"C1++"<<endl;
    cout<<"C1 = ";
    cout<<c1;

    c3--;
    cout<<"C3--"<<endl;
    cout<<"C3 = ";
    cout<<c3;
*/



    return 0;
}
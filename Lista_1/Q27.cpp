#include <iostream>

//PODEMOS USAR TEMPLATE para generalizar
/*
template<typename T>

void swap (T *p1, T *p2){
    T temp{*p1};
    *p1 = *p2;
    *p2 = temp;
}

*/

void swap( int *p1, int *p2){
    int temp{*p1};
    *p1 = *p2;
    *p2 = temp;
}

int main(){

    int n1{3}, n2{10}, *pont1{&n1}, *pont2{&n2};

    std::cout << "Antes do swap: ponteiro 1 - " << *pont1 
              << " \\ ponteiro 2 - " << *pont2 << std::endl;
    
    swap(pont1,pont2);

    std::cout << "Depois do swap: ponteiro 1 - " << *pont1 
              << " \\ ponteiro 2 - " << *pont2 << std::endl;

    return 0;
}
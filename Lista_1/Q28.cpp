#include <iostream>

//PODEMOS USAR TEMPLATE para generalizar
/*
template <typename T>

void swap (T &r1, T &r2){
    T temp{r1};
    r1 = r2;
    r2 = temp;
}

*/

void swap( int &r1, int &r2){
    int temp{r1};
    r1 = r2;
    r2 = temp;
}

int main(){

    int n1{3}, n2{10}, &ref1{n1}, &ref2{n2};

    std::cout << "Antes do swap: referencia 1 - " << ref1 
              << " \\ referencia 2 - " << ref2 << std::endl;
    
    swap(ref1,ref2);

    std::cout << "Depois do swap: referencia 1 - " << ref1 
              << " \\ referencia 2 - " << ref2 << std::endl;

    return 0;
}

// Não precisaria criar as referências na main, poderia só mandar as váriaveis.
// Diferença entre ref e ponnteiros é que no argumento em ref basta as váriaves, no caso, 
// swap(n1,n2). Com ponteiros enviariamos swap(&n1,&n2).
// Chamar a função na main como swap(2,3) estaria errado, pois 2 e 3 são consts sendo enviados
// para uma função com parametros não consts. 
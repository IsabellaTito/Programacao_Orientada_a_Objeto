#include <iostream>
#include <array>

using std::array;

bool ehprimo(int x){
    if(x <= 1)
        return false;

    for (int i=2; i<x; i++){
        if(x%i == 0)
            return false;
    }
    return true;
};
// Forma correta sem o auto -> bool temprimo(array<int,5> &arr)
bool temprimo(auto &arr){
    for(auto &i:arr){
        if(ehprimo(i))
            return true;
    }
    return false;
};

int main(){

    array num{1,2,3,4,6,16}; // Erro por falta de atualização do compilador para C++20

    if(temprimo(num))
        std::cout << "Contem primo no array!" << std::endl;
    else
        std::cout << "O array nao possui numero primo!" << std::endl;

    return 0;
}
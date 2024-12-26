#include <iostream>
#include <vector>

using std::vector;

bool ehprimo(int x){
    if(x <= 1)
        return false;

    for (int i=2; i<x; i++){
        if(x%i == 0)
            return false;
    }
    return true;
};

bool temprimo(auto &vec){
    for(auto &a : vec){
        if(ehprimo(a))
            return true;
    }
    return false;
}

int main(){

    vector v{2,4,6,8,10};

    if(temprimo(v))
        std::cout << "Contem primo no vetor!" << std::endl;
    else
        std::cout << "O vetor nao possui numero primo!" << std::endl;
    
    return 0;
}
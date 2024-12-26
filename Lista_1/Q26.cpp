#include <iostream>

int seq(void){
    static int n{0};
    return n++;
}

int main(){

    std::cout << seq() << std::endl; //0
    std::cout << seq() << std::endl; //1
    std::cout << seq() << std::endl; //2
    std::cout << seq() << std::endl; //3

    return 0;
}
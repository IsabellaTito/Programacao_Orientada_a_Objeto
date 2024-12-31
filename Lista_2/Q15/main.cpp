#include <iostream>
#include "Carro.hpp"

using std::string, std::cout, std::endl;

int main(){

    Carro possante{"McLaren", "Senna", 2018};

    cout << "Marca " << possante.getMarca() 
         << ", modelo " << possante.getModelo()
         << " e ano " << possante.getAno()
         << " do meu possante!" <<endl; 
         
    cout << "Informacoes de Marca, Modelo e Ano do possante: " << possante.toString()<<endl;

    return 0;
}
#include <iostream>
#include "ContaBanco.hpp"

using std::cout, std::endl, std::cerr;

ContaBanco::ContaBanco(double saldo){
    CB_saldo = (saldo < 0? 0 : saldo);
}

 
//void ContaBanco::setSaldo(double saldo){
    //CB_saldo = saldo;
 //}
        
void ContaBanco::creditar(double quant){
    if(quant >= 0){
        CB_saldo += quant;
    }
}

void ContaBanco::debitar(double quant){
    if(getSaldo()>quant){
        CB_saldo -= quant;
    }
    else{
        cerr << "ERRO: Quantia para debitar eh maior que o saldo disponivel!" << endl <<endl;
        //cout << "ERRO: Quantia para debitar eh maior que o saldo disponivel!" << endl <<endl; 
    }
}

double ContaBanco::getSaldo() const{
    return CB_saldo;
}
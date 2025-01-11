#include "Pessoa.h"

Pessoa::Pessoa(string nome, string CPF, bool valido){
    set_nome(nome);
    set_CPF(CPF);
    set_valido(valido);
}

string Pessoa::get_nome() const{
    return p_nome;
}

void Pessoa::set_nome(string nome){
    p_nome = nome;
}

string Pessoa::get_CPF() const{
    return p_CPF;
}

void Pessoa::set_CPF(string CPF){
    p_CPF = CPF;    
}

bool Pessoa::get_valido() const{
    return p_CPFV;
}

void Pessoa::set_valido(bool valido){
    p_CPFV = valido;    
}

void Pessoa::apresentar(){
    cout<<"Nome: "<< p_nome<<endl;
    cout<<"CPF: ";

    for(int i=0; i<11; i++){
        if(i==2||i==5)
            cout << p_CPF[i]<<".";
        else if(i==8)
            cout <<p_CPF[i]<<"-";
        else
            cout<<p_CPF[i];
    }
    
    if(p_CPFV)
        cout<<" (Valido)"<<endl<<endl;
    else
        cout<<" (Invalido)"<<endl<<endl;

} 
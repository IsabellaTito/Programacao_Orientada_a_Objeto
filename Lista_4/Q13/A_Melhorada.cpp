#include "A_Melhorada.h"

Agenda::Agenda(int tPessoas = 1):qtdePessoas(0){
    this->tPessoas=tPessoas;
    pessoas = new int[tPessoas];
}

Agenda::~Agenda(){
    if(pessoas)
        delete[] pessoas;
}

void Agenda::armazenaPessoa(const string &nome, int idade, float altura){
    if(qtdePessoas < 10){
        pessoas[qtdePessoas].setNome(nome);
        pessoas[qtdePessoas].setIdade(idade);
        pessoas[qtdePessoas].setAltura(altura);
        qtdePessoas++;
    }
    else{
        throw std::out_of_range("Agenda Cheia!");
    }
}

void Agenda::armazenaPessoa(const Pessoa &p){
    if(qtdePessoas < 10){
        pessoas[qtdePessoas] = p;
        qtdePessoas++;
    }
    else{
        throw std::out_of_range("Agenda Cheia!");
    }
}

void Agenda::removePessoa(const string &nome){
    for(int i=0;i<qtdePessoas;i++){
        if(pessoas[i].getNome() == nome){
            for(int j=i; j<qtdePessoas; j++){
                pessoas[i] = pessoas[i+1];
            }
            qtdePessoas--;
        }
    }
}


int Agenda::buscaPessoa(const string &nome) const{
    for(int i=0; i<qtdePessoas; i++){
        if(pessoas[i].getNome() == nome){
            return i;
        }
    }
    return -1;
} 

void Agenda::imprimePovo() const{
    cout<<"--------- AGENDA ---------"<<endl;
    cout<< format("{:^10} {:^7} {:^8}","NOME","IDADE","ALTURA")<<endl;
    for(int i=0; i<qtdePessoas; i++){
        cout << format("{:^10} {:^7} {:^8}", pessoas[i].getNome(), pessoas[i].getIdade(), pessoas[i].getAltura())<<endl;
    }
} 

void Agenda::imprimePessoa(int i) const{
    cout << "Nome: " << pessoas[i].getNome()<<endl;
    cout << "Idade: " << pessoas[i].getIdade() <<endl;
    cout << "Altura: " << pessoas[i].getAltura() <<endl;
} 
#include "Humano.h"

Humano::Humano(string n, int d){
    setNome(n);
    setIdade(d);
}

void Humano::setNome(string n){
    nome = n;
}
void Humano::setIdade(int d){
    idade = d>0? d : 0;
}
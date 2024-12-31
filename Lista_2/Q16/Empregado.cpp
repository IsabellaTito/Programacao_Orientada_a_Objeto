#include "Empregado.hpp"

Empregado::Empregado(string nome, string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

string Empregado::getNome() const{
    return e_nome;
}

void Empregado::setNome(string nome){
    e_nome = nome;
}

string Empregado::getSobrenome() const{
    return e_sobrenome;
}

void Empregado::setSobrenome(string sobrenome){
    e_sobrenome = sobrenome;
}

double Empregado::getSalario() const{
    return e_salario;
}

void Empregado::setSalario(double salario){
    salario>0 ? salario += 0 : salario = 0; 
    e_salario = salario;
}
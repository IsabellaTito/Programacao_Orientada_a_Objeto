#pragma once

#include<string>

using std::string;

class Empregado{

public:

    Empregado(string nome, string sobrenome, double salario);

    string getNome() const;
    void setNome(string nome);

    string getSobrenome() const;
    void setSobrenome(string sobrenome);

    double getSalario() const;
    void setSalario(double salario);

private:
    string e_nome;
    string e_sobrenome;
    double e_salario;

};
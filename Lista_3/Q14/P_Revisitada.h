#pragma once

#include <string>
//#include <format>
#include <iostream>

using std::string,std::cout,std::endl;

class Pessoa{

public:
    Pessoa(string nome, string CPF = "000000000000");

    string getNome() const;
    void setNome(string nome);

    string getCPF() const;
    void setCPF(string CPF);

    void apresentar(); 

private:

    string p_nome;
    string p_CPF;
    bool p_CPFV;

};
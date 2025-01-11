#pragma once

#include <string>
//#include <format>
#include <iostream>

using std::string,std::cout,std::endl;

class Pessoa{

public:
    Pessoa(string nome, string CPF = "000000000000", bool valido = false);

    string get_nome() const;
    void set_nome(string nome);

    string get_CPF() const;
    void set_CPF(string CPF);

    bool get_valido() const;
    void set_valido(bool valido);

    void apresentar(); 

private:

    string p_nome;
    string p_CPF;
    bool p_CPFV;

};
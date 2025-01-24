#pragma once

#include "PessoaFisica.h"
#include <string>
#include <iostream>

using std::string, std::cout, std::endl;

class Funcionario : public PessoaFisica{
    friend ostream &operator<<(ostream &out, Funcionario &f);
    public:
        Funcionario(string, string, string, int, int, int);

        void setMatricula(string matric);
        void setSalario(int sala);
        void setHoras_Mensal(int horasM);
        void setHoras_trabalhadas(int horasTrab);

        string getMatricula()const{return matricula;}
        int getSalario()const{return salario;}
        int getHoras_mensais()const{return horas_mensal;}
        int getHoras_trabalhadas()const{return horas_trabalhadas;}

        double calculaSalarioBruto() const;

    private:
        string matricula;
        int salario;
        int horas_mensal;
        int horas_trabalhadas;
};
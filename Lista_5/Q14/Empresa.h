#pragma once

#include <vector>
#include <iostream>
#include <string>
#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "Cliente.h"

using std::vector, std::cout, std::endl, std::string;

class Empresa : public PessoaJuridica{
    friend ostream &operator<<(ostream &, const Empresa &);
    public:
        Empresa(string nomeFant, string cnpj, string razao);

        void addFuncionario(Funcionario &func);
        void addCliente(Cliente &cliente);
        void removeFuncionario(string cpf);
        void removeCliente(string cpf);

        void imprimeFunc() const;
        void imprimeClie() const;

        double calcularFolhaDePagamento() const;


    private:
        vector<Funcionario>funcionarios;
        vector<Cliente>clientes;



};
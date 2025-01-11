#pragma once

#include <string>
#include <vector>
#include <array>
#include <iostream>
#include <format>

using std::string, std::array, std::vector;
using std::to_string, std::format, std::cout, std::endl;

typedef struct{
    string c_id;
    string c_descricao;
    int c_quantidade;
    double c_preco;
}ITEM;

//typedef struct ITEM Item;


class Cupom2{

    public:
        void addItem(string id, string desc, int quant, double preco);

        string getItem(string id) const;

        double calculaCupom() const;

        void imprimirnota() const;


    private:

        vector<ITEM>c_itens;
        //array<ITEM,20>c_itens;
};
#include "Cupom.hpp"

Cupom::Cupom(string id, string desc, int quant, float preco){
    setID(id);
    setDESC(desc);
    setQuant(quant);
    setPreco(preco);
}

string Cupom::getID() const{
    return c_id;
}
void Cupom::setID(string id){
    c_id = id;
}

string Cupom::getDESC() const{
    return c_descricao;
}

void Cupom::setDESC(string desc){
    c_descricao = desc;
}

int Cupom::getQuant() const{
    return c_quantidade;
}

void Cupom::setQuant(int quant){
    if(quant<0)
        c_quantidade = 0;
    else
        c_quantidade = quant;
}

float Cupom::getPreco() const{
    return c_preco;
}

void Cupom::setPreco(float preco){
    if(preco<0)
        c_preco = 0;
    else
        c_preco = preco;
}

float Cupom::calculaCupom(){
    return getQuant()*getPreco();
}
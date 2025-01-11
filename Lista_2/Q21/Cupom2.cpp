#include "Cupom2.hpp"


void Cupom2::addItem(string id, string desc, int quant, double preco){
    quant = quant < 0? 0 : quant;
    preco = preco < 0? 0 : preco;

    ITEM aux{id, desc, quant, preco};
    
    //PARA VECTOR 
    if (c_itens.size() < 20){
        c_itens.push_back(aux);
    }
    else{
        std::cerr << "Sua lista de compras está cheia!" << std::endl;
    }
    
    //PARA ARRAY
    //itens.at(itens.size()) = aux;

}

string Cupom2::getItem(string id) const{
    for(const ITEM &a : c_itens){
        if (a.c_id.compare(id) == 0)
            return format("Item encontrado!\nID: {} \nProduto: {} \nQuantidade: {} \nPreco: {} \n", a.c_id, a.c_descricao, a.c_quantidade, a.c_preco);
    }
    return format("Item com o ID: {} nao foi encontrado!", id);
}

double Cupom2::calculaCupom() const{
    double soma{0};
    for(const auto &a : c_itens){
        soma+= (a.c_quantidade*a.c_preco);
    }
    return soma;
}

void Cupom2::imprimirnota() const{
    double soma{0},aux{0};
    cout <<"  ID     DECRICAO             QUANT   Preco/unid    Preco*unid  "<<endl;
    cout <<"----------------------------------------------------------------"<<endl;
    
    for (const ITEM &a : c_itens){
        aux = a.c_quantidade*a.c_preco;
        soma+= aux;
        cout << format("{:^5} {:^19}      {:^3}      {:^5}      {:>10.2f}", a.c_id, a.c_descricao, a.c_quantidade, a.c_preco, aux)<<endl;
    }
    cout << format("----------------------------------------------- Total: {}",soma)<<endl<<endl;
}





#pragma once

#include <iostream>
#include <string>

using std::string;

class Cupom{
    public:
    
        Cupom(string id, string desc, int quant, float preco);

        string getID() const;
        void setID(string id);

        string getDESC() const;
        void setDESC(string desc);

        int getQuant() const;
        void setQuant(int quant);

        float getPreco() const;
        void setPreco(float preco);

        float calculaCupom();
        
    private:

        string c_id;
        string c_descricao;
        int c_quantidade;
        float c_preco;

};
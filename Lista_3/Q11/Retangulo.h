#pragma once

#include <iostream>

using std::cout, std::endl;

class Retangulo{

    public:

        Retangulo(int = 1.0, int = 1.0);

        int get_altura() const;
        void set_altura(int);

        int get_largura() const;
        void set_largura(int);

        int perimetro();

        int area();

        void desenha();
        
    private:
        int altura;
        int largura;

};
#pragma once

#include <iostream>

using std::ostream, std::cout, std::endl;

class Complex{
    
    friend ostream &operator<<(ostream &, const Complex &);

    public:
        Complex(){}
        Complex(double,double);

        //SOMA e retorna um terceiro complexo como resultado
        Complex operator+(Complex &);

        //SOMA e retorna o invocador
        Complex& operator+=(Complex &);

        //SUBTRAI e retorna um terceiro complexo como resultado
        Complex operator-(Complex &);

        //SUBTRAI e retorna o invocador
        Complex& operator-=(Complex &);

        //INCREMENTA 
        Complex& operator++();

        //DECREMENTA
        Complex& operator--();


    private:
        double parte_real;
        double parte_imaginaria;
};

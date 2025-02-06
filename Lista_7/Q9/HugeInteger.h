#pragma once

#include <iostream>
#include <string>
#include <array>
#include <cctype>

using std::cout, std::endl, std::array, std::string, std::ostream;

class HugeInteger{

    friend ostream& operator<<(ostream &, const HugeInteger &);

    public:
        HugeInteger(string num);
        HugeInteger(int tam);

        //Verifica a string
        void input(string numero);
        void operator=(string numero);

        void output()const;

        //Soma os objetos
        void add(const HugeInteger &);
        HugeInteger operator+(const HugeInteger &); //retorna um terceiro
        HugeInteger& operator+=(const HugeInteger &); //retorna o invocador

        //Verifica Igualdade
        bool isEqualTo(const HugeInteger &) const;
        bool operator==(const HugeInteger &) const;

        //Verifica se é diferente
        bool isNotEqualTo(const HugeInteger &) const;
        bool operator!=(const HugeInteger &)const;

        //Verifica se é maior que
        bool isGreaterThan(const HugeInteger &) const;
        bool operator>(const HugeInteger &)const;

        //Verifica se é menor que
        bool isLessThan(const HugeInteger &) const;
        bool operator<(const HugeInteger &)const;

        //Verifica se é maior ou igual
        bool isGreaterThanOrIqual(const HugeInteger &) const;
        bool operator>=(const HugeInteger &) const;

        //Verifica se é menor ou igual
        bool isLessThanOrIqual(const HugeInteger &) const;
        bool operator<=(const HugeInteger &)const;

    private:
        array<char,40>num;
        int tam_num;

};
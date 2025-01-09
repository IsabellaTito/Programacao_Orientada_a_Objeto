#pragma once

#include <iostream>
#include <string>
#include <format>

using std::string, std::to_string, std::format;

class Data{

    public:
        Data(int d, int m, int a);

        int getDia() const;
        void setDia(int d);

        int getMes() const;
        void setMes(int m);

        int getAno() const;
        void setAno(int a);

        string toString() const;
        
    private:
        int d_dia;
        int d_mes;
        int d_ano;

};
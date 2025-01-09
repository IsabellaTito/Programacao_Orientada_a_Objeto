#pragma once

class ContaBanco{

    public:
        ContaBanco(double saldo);

        //void setSaldo(double saldo);
        void creditar(double quant);
        void debitar(double quant);
        double getSaldo() const;


    private:
        double CB_saldo;

};
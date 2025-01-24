#include "Funcionario.h"

ostream &operator<<(ostream &out, Funcionario &f){
            out << "Nome do Funcionario: " << f.getNome() <<endl;
            out << "CPF: " << f.getCPF() << endl;
            out << "Matricula: " << f.getMatricula() <<endl;
            out << "Salario: " << f.getSalario() << endl;
            out << "Horas Mensais: " << f.getHoras_mensais() <<endl;
            out << "Horas Trabalhadas: " << f.getHoras_trabalhadas() <<endl;
            out << "Salario Bruto: " << f.calculaSalarioBruto() << endl;
            return out;
}

Funcionario::Funcionario(string nome, string cpf, string matric, int sala, int horasM, int horasTrab):PessoaFisica(nome,cpf){
            setMatricula(matric);
            setSalario(sala);
            setHoras_Mensal(horasM);
            setHoras_trabalhadas(horasTrab);
}

void Funcionario::setMatricula(string matric){
    matricula = matric;
}

void Funcionario::setSalario(int sala){
    salario=sala;
}

void Funcionario::setHoras_Mensal(int horasM){
    horas_mensal = horasM;
}

void Funcionario::setHoras_trabalhadas(int horasTrab){
    if(horasTrab <= 0 || horasTrab > horas_mensal){
        cout<<"Quantidade de horas trabalhadas invalida!"<<endl;
        exit(1);
    }
    else{
        horas_trabalhadas = horasTrab;
    }
}

int Funcionario::calculaSalarioBruto(){
    return salario*horas_trabalhadas/horas_mensal;
}
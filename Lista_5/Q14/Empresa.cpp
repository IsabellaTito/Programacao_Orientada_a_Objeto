#include "Empresa.h"

ostream &operator<<(ostream &out, const Empresa &p){
    out << "CNPJ: " << p.getCNPJ() << endl;
    out << "Razao Social: " << p.getRazao_social() << endl;
    out << "Nome Fantasia: " << p.getNome() << endl<<endl;

    out << "Lista de Clientes: " <<endl<<endl;
    for (const auto &cliente: p.clientes){
        out << "Nome do cliente: " << cliente.getNome() <<endl;
        out << "CPF: " << cliente.getCPF() << endl<<endl;
    }
    out << "Lista de Funcionarios: " <<endl<<endl;
    for (const auto &func: p.funcionarios){
        out << "Nome do Funcionario: " << func.getNome() <<endl;
        out << "Matricula: " << func.getMatricula() <<endl;
        out << "Salario: " << func.calculaSalarioBruto() << endl<<endl;
    }
    out << "Folha de pagamento: " << p.calcularFolhaDePagamento()<<endl;
    return out;
}

Empresa::Empresa(string nomeFant, string cnpj, string razao):PessoaJuridica(nomeFant,cnpj,razao){
            
}

void Empresa::addFuncionario(Funcionario &func){
    funcionarios.push_back(func);
}


void Empresa::addCliente(Cliente &cliente){
    clientes.push_back(cliente);
}


void Empresa::removeFuncionario(string cpf){
    for(int i=0; i < funcionarios.size(); i++){
        if(funcionarios[i].getCPF()==cpf){
            funcionarios.erase(funcionarios.begin()+i);
        }
    }
}


void Empresa::removeCliente(string cpf){
    for(int i=0; i < clientes.size(); i++){
        if(clientes[i].getCPF()==cpf){
            clientes.erase(clientes.begin()+i);
        }
    }
}

void Empresa::imprimeFunc() const{
     for(int i=0; i < funcionarios.size(); i++){
        cout << funcionarios[i] << endl;
    }    
}

void Empresa::imprimeClie() const{
    for(int i=0; i < clientes.size(); i++){
        cout << clientes[i] <<endl;
    }
}

double Empresa::calcularFolhaDePagamento() const{
    double result=0;
    for(int i=0; i < funcionarios.size(); i++){
        result+=funcionarios[i].calculaSalarioBruto();
    }
    return result;
}
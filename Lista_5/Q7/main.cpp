#include <iostream>
#include <string>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

using std::string, std::cout, std::endl;

int main(){

    Animal A1, A2{"Uther"};
    Cachorro C1{"Mancha"}, C2;
    Gato G1{"Ramon"}, G2;

    cout << "Informacao Animal A1: " << endl<<endl;
    A1.informacao();
    cout<<endl;

    cout << "Informacao Animal A2: " << endl<<endl;
    A2.informacao();
    cout<<endl;

    cout << "Informacao Cachorro C1: " << endl<<endl;
    C1.informacao();
    cout<<endl;

    cout << "Informacao Cachorro C2: " << endl<<endl;
    C2.informacao();
    cout<<endl;


    cout << "Informacao Gato G1: " << endl<<endl;
    G1.informacao();
    cout<<endl;

    cout << "Informacao Gato G2: " << endl<<endl;
    G2.informacao();
    cout<<endl;


    A1.setNome("Barto");
    A1.setRaca("Calopsita");
    A2.setRaca("PitMonster");

    C1.setRaca("Shih Tzu");
    C2.setNome("Serena");
    C2.setRaca("Pinscher");

    G1.setRaca("Bobtail Americano");
    G2.setNome("Capitu");
    G2.setRaca("Snowshoe");

    cout << "Informacao Animal A1: " << endl<<endl;
    A1.informacao();
    cout<<endl;

    cout << "Informacao Animal A2: " << endl<<endl;
    cout<<"Nome: "<<A2.getNome()<<endl;
    cout<<"Raça: "<<A2.getRaca()<<endl;
    cout<<endl;


    cout << "Informacao Cachorro C1: " << endl<<endl;
    C1.informacao();
    cout<<endl;

    cout << "Informacao Cachorro C2: " << endl<<endl;
    C2.informacao();
    cout<<endl;


    cout << "Informacao Gato G1: " << endl<<endl;
    G1.informacao();
    cout<<endl;

    cout << "Informacao Gato G2: " << endl<<endl;
    G2.informacao();
    cout<<endl;



    cout << C1.getNome() << " esta latindo para os gatos da rua " << C1.late() <<endl<<endl;

    cout << G1.getNome() << " esta miando bravo para " << C1.getNome() << " " << G1.Ataca() <<endl<<endl;

    cout << "Enquanto isso " << G2.getNome() << " se aproxima calmamente... " << G2.mia() << endl<<endl;

    cout << C2.getNome() << " fica irritado e rosna para " << G2.getNome() << " " << C2.rosna() <<endl<<endl;



    return 0;
}
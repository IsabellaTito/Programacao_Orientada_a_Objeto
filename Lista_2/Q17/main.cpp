#include <iostream>
#include <string>
#include "Bruxo.hpp"

using std::string, std::cout, std::endl;

int main(){

    Bruxo B1{"Rony", "Grifinoria", "Wingardium Leviosa"}, B2{"Cedrico", "Lufa-lufa", "Cabeca de Bolha"}, B3{"Luna", "Corvinal","Expecto Patronum"};
    Bruxo B4{"Draco","Sonserina","Proteu"}, B5{"Isabella", "IFPB", "Lumus"}, B6{"Matthew","IFPB","Alohomora"};

    cout << "O feitico preferido do bruxo " << B1.getNome() << " da " << B1.getCasa() << " eh " << B1.getFeitico() << endl;
    cout << "O feitico preferido do bruxo " << B2.getNome() << " da " << B2.getCasa() << " eh " << B2.getFeitico() << endl;
    cout << "O feitico preferido da bruxa " << B3.getNome() << " da " << B3.getCasa() << " eh " << B3.getFeitico() << endl;
    cout << "O feitico preferido da bruxa " << B6.getNome() << " da " << B6.getCasa() << " eh " << B6.getFeitico() << endl;
    cout << "Usando display: "<< endl;
    B4.display();
    B5.display();

    B1.setNome("Hermione");
    B1.setFeitico("Expelliarmus");

    cout << "O feitico preferido da bruxa " << B1.getNome() << " da " << B1.getCasa() << " eh " << B1.getFeitico() << endl;

    B5.setCasa("Grifinoria");
    B6.setCasa("Corvinal");

    B5.display();
    cout << "O feitico preferido do bruxo " << B6.getNome() << " da " << B6.getCasa() << " eh " << B6.getFeitico() << endl;

    B2.lancarFeitico();
    B4.lancarFeitico();

   return 0;
}

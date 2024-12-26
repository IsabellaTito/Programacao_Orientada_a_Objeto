#include <iostream>
#include <string>
#include <cctype>

using std::string;

string min(string &nome){
    string temp;
    for( auto &a : nome){
        temp += tolower(a);
    }
    return temp;
};

int main(){

    string s;
    std::cout <<"Digite uma palavra: ";
    std::cin >> s;

    std::cout << min(s) << std::endl;
    return 0;
}

/*

void sm(string &palavra){
    int i{0};
    while(palavra[i] != '\0'){
        if(palavra[i]>='A' && palavra[i]<='Z'){
            palavra[i]+=32; \\As letras minusculas vem primeiro na tabela ASCII e depois as maiusculas. Então basicamente ele pegou o valor da letra e somou 32 para chegar na sua respectiva maiuscula    
        }
        i++;
    }
}

*/
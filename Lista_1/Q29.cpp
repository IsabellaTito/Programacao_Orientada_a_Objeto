#include <iostream>
#include <string>
#include <cctype>

using std::string;

bool maius(string &nome){
    for(auto &a : nome){
        if(isupper(a))
            return true;
    }
    return false;
};

int main(){

    string s;
    std::cout <<"Digite uma palavra: ";
    std::cin >> s;
    //Ou para mais de uma palavra: getline(std::cin,s);

    if(maius(s)){
        std::cout << s << " contem letra maiuscula" << std::endl;
    }
    else{
        std::cout << s << " nao contem letra maiuscula" << std::endl;
    }

    return 0;
}
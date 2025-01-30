#include "HugeInteger.h"

HugeInteger::HugeInteger(string num){
    input(num);
}

void HugeInteger::input(string numero){
    for(int i=0; i<40;i++){
        num[i]='0';
    }

    tam_num=numero.size();
    
    if(tam_num>40){
        cout<<"Numero maior que o permitido!"<<endl;
        tam_num=0;
    }
    else{
        for(int i=tam_num-1;i>-1;i--){
            if(!(isdigit(numero[i]))){
                cout<<"Nao eh um numero!"<<endl;
                tam_num=0;
                break;
            }
            else{
                num[(tam_num-1)-i] = numero[i];
            }
        }
    }
}

void HugeInteger::output()const{
    for(int i=tam_num-1; i>-1; i--){
        cout<<num[i];
    }
}

void HugeInteger::add(const HugeInteger &numeros){
    int excedente{0},soma{0};
    for (int i=0; i<numeros.tam_num;i++){
        soma = (num[i]-'0')+(numeros.num[i]-'0')+excedente;
        excedente = soma/10;
        num[i] = (soma%10) + '0';
    }
    if(excedente>=1){
        soma = (num[numeros.tam_num]-'0')+excedente;
        num[numeros.tam_num] = (num[numeros.tam_num]-'0')+soma+'0';
        tam_num++;
    }
}

bool HugeInteger::isEqualTo(const HugeInteger &numeros) const{
    if(tam_num==numeros.tam_num){
        for(int i=0; i<tam_num;i++){
            if(num[i]!=numeros.num[i]){
                return false;
            }
        }
        return true;
    }
    return false;
}


bool HugeInteger::isNotEqualTo(const HugeInteger &numeros) const{
    return !(isEqualTo(numeros));
}


bool HugeInteger::isGreaterThan(const HugeInteger &numeros) const{
    if(tam_num==numeros.tam_num){
        for(int i=tam_num-1; i>-1;i--){
            if((num[i]-'0')>(numeros.num[i]-'0')){
                return true;
            }
            else if((num[i]-'0')<(numeros.num[i]-'0')){
                return false;
            }
        }
        return false;
    }
    else if(tam_num>numeros.tam_num){
        return true;
    }
    return false;

}

bool HugeInteger::isLessThan(const HugeInteger &numeros) const{
    if(tam_num==numeros.tam_num){
        for(int i=tam_num-1; i>-1;i--){
            if((num[i]-'0')<(numeros.num[i]-'0')){
                return true;
            }
            else if((num[i]-'0')>(numeros.num[i]-'0')){
                return false;
            }
        }
        return false;
    }
    else if(tam_num<numeros.tam_num){
        return true;
    }
    return false;
}

bool HugeInteger::isGreaterThanOrIqual(const HugeInteger &numeros) const{
    if(isGreaterThan(numeros)||isEqualTo(numeros)){
        return true;
    }
    return false;
}

bool HugeInteger::isLessThanOrIqual(const HugeInteger &numeros) const{
    if(isLessThan(numeros)||isEqualTo(numeros)){
        return true;
    }
    return false;
}
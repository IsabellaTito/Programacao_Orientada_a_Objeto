#include <iostream>
#include <string>

#include "HugeInteger.h"

using std::cout, std::endl;

int main(){
  HugeInteger num1{"1234567891234"}, num3{"9111111111127"};
  
  cout << "Vamos somar esses numeros gigantes:\n";
  cout<<num1;
  cout << " + ";
  cout<<num3;
  cout << " = "<<endl<<endl;

  cout<<"Usando sobrecarga do + :"<<num1+num3<<endl;
  cout<<"Usando sobrecarga num1+=num3: ";
  num1+=num3;
  cout<<num1<<endl;
  
  
  cout << endl << endl;
  
  cout << "Comparações entre ";
  cout << num1;
  cout << " e ";
  cout << num3;
  cout << ", respectivamente:\n";
  cout << " <  : "<< (num1<num3) <<endl;
  cout << " >  : "<< (num1>num3) <<endl;
  cout << " <=  : "<< (num1<=num3) <<endl;
  cout << " >=  : "<< (num1>=num3)<<endl;
  cout << " =  : "<< (num1==num3) <<endl;
  cout << " !=  : "<< (num1!=num3) <<endl;
  
  HugeInteger num4{"11111111"}, num5{"11111111"};
  
  cout << "Comparações entre ";
  cout<<num4;
  cout << " e ";
  cout<<num5;
  cout << ", respectivamente:\n";
  cout << " <  :" << (num4<num5) <<endl;
  cout << " >  :" << (num4>num5) <<endl;
  cout << " <=  :" << (num4<=num5) <<endl;
  cout << " >=  :" << (num4>=num5) <<endl;
  cout << " =  :" << (num4==num5) <<endl;
  cout << " !=  :" << (num4!=num5) <<endl;
  
  HugeInteger num6{"12a34"}; //Tentando passar um não número
  
  return 0;
}
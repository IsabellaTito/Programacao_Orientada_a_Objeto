#include <iostream>
using std::cout, std::endl;
using std::cin;

#include "Array.h"

int main() {
  Array a1(7);  //array de 7 elementos
  Array a2,a4;     //array de 10 elementos

  cout << "Entre com 7 elementos: ";
  
  cin >> a1;    //lendo array 

  cout << "Entre com 10 elementos: ";
  cin >> a2;

  if (a1 == a2)
    cout << "a1 e a2 são iguais";

  cout <<"a1: "<< a1<<endl;
  cout <<"a2: "<< a2<<endl;

  a4 = a1+a2;

  cout <<"a1+a2 = "<<a4;

  a1+=a2;
  cout<<"a1+=a2: " << a1;

  return 0;
}
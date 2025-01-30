#include <iostream>
#include <string>

#include "HugeInteger.h"

using std::cout, std::endl;

int main(){
  HugeInteger num1{"1234567891234"}, num3{"9111111111127"};
  
  cout << "Vamos somar esses numeros gigantes:\n";
  num1.output();
  cout << " + ";
  num3.output();
  cout << " = ";

  num1.add(num3);
  
  num1.output();
  cout << endl << endl;
  
  cout << "Comparações entre ";
  num1.output();
  cout << " e ";
  num3.output();
  cout << ", respectivamente:\n";
  cout << " <  : "<< num1.isLessThan(num3)<<endl;
  cout << " >  : "<< num1.isGreaterThan(num3)<<endl;
  cout << " <=  : "<< num1.isLessThanOrIqual(num3)<<endl;
  cout << " >=  : "<< num1.isGreaterThanOrIqual(num3)<<endl;
  cout << " =  : "<< num1.isEqualTo(num3)<<endl;
  cout << " !=  : "<< num1.isNotEqualTo(num3)<<endl;
  
  HugeInteger num4{"11111111"}, num5{"11111111"};
  
  cout << "Comparações entre ";
  num4.output();
  cout << " e ";
  num5.output();
  cout << ", respectivamente:\n";
  cout << " <  :" << num4.isLessThan(num5) <<endl;
  cout << " >  :" << num4.isGreaterThan(num5) <<endl;
  cout << " <=  :" << num4.isLessThanOrIqual(num5) <<endl;
  cout << " >=  :" << num4.isGreaterThanOrIqual(num5) <<endl;
  cout << " =  :" << num4.isEqualTo(num5) <<endl;
  cout << " !=  :" << num4.isNotEqualTo(num5) <<endl;
  
  HugeInteger num6{"12a34"}; //Tentando passar um não número
  
  return 0;
}
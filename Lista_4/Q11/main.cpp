#include <iostream>
#include "AL_Revisitada.h"

using std::cout, std::endl;

int main() {
  ArrayList al{10};

  al.add(1).add(2).add(10).add(4).add(20).add(45).add(8).add(4);
   
  al.print();

  cout << al.busca(3) << endl;

  cout << al.busca(6) << endl;

  al.remove(1);

  al.print();

  al.removeEl(4);

  al.print();

  return 0;
}

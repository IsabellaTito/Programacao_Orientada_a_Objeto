#include <iostream>
using std::cout, std::endl;

#include "ArrayList.h"
#include <stdexcept>

ArrayList::ArrayList(int tam) : pos(0) {
  if (tam > 0) {
    this->tam = tam;
    arr = new int[tam];
  } else {
    arr = nullptr;
    this->tam = 0;
  }
}

ArrayList::~ArrayList() {
  if (arr)
    delete[] arr;
}

ArrayList &ArrayList::add(int v) {
  //validando espaço
  if (pos >= tam)
	throw std::out_of_range("Não há mais espaço no ArrayList!");
  
  arr[pos++] = v;

  return *this;
}

void ArrayList::print() const {
  for (int i = 0; i < pos; i++)
    std::cout << arr[i] << " ";
  std::cout << std::endl;
}

void somaArray(ArrayList &lista, int n){
  for(int i=0; i<lista.pos; i++){
    lista.arr[i] += n;
  }
}

void subArray(ArrayList &lista, int n){
  for(int i=0; i<lista.pos; i++){
    lista.arr[i]-= n;
  }
}

void mulArray(ArrayList &lista, int n){
  for(int i=0;i<lista.pos;i++){
    lista.arr[i]*=n;
  }
}

void divArray(ArrayList &lista, int n){
  if(n!=0){
    for(int i=0; i<lista.pos; i++){
      lista.arr[i] = lista.arr[i]/n;
    }
  }
  else{
    throw std::out_of_range("Não é possível dividir por 0!");
  }
}
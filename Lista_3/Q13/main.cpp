#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
	Time t(16,40);

	cout << "Objeto t: ";
	cout << t.toUniversal() << endl;

	Time outroTime;

	cout << "Objeto outroTime criado: ";
	cout << outroTime.toUniversal() << endl;


	return 0;
}

#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
	Time t(11,50,59);

	cout << "Objeto t: ";
	cout << t.toUniversal() << endl;
	
	t.tick();
	
	cout << "Objeto t: ";
	cout << t.toUniversal() << endl<<endl;
	
	Time Time2(11,59,59);
	
	cout << "Objeto Time2: ";
	cout << Time2.toUniversal() << endl;
	
	Time2.tick();
	
	cout << "Objeto Time2: ";
	cout << Time2.toUniversal() << endl<<endl;
	
	Time Time3(23,59,59);
	
	cout << "Objeto Time3: ";
	cout << Time3.toUniversal() << endl;
	
	Time3.tick();
	
	cout << "Objeto Time3: ";
	cout << Time3.toUniversal() << endl<<endl;
	
	Time Time4(10,36,47);
	
	cout << "Objeto Time4: ";
	cout << Time4.toUniversal() << endl;
	
	Time4.tick();
	
	cout << "Objeto Time4: ";
	cout << Time4.toUniversal() << endl<<endl;

	return 0;
}
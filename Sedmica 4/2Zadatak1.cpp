#include <iostream>
using namespace std;
	

int main(){
	//a) Deklarirati dvije varijable tipa float (broj1 i broj2).
	float broj1,broj2;
	//b) Inicijalizirati varijablu broj1 vrijedno��u 7.3.
	broj1 = 7.3;
	//c) Deklarirati pokaziva� na tip podatka float.
	float *p; //float* p
	//d) Inicijalizirati pokaziva� na adresu varijable broj1.
	p = &broj1;
	//e) Ispisati vrijednost varijable na koju upu�uje pokaziva� koriste�i dereferenciranje pokaziva�a.
	cout << *p;
	cout << endl;
	//f) Neka pokaziva� pokazuje na varijablu broj2. Dodjelite proizvoljnu vrijednost u broj2 preko pokaziva�a. Ispi�ite vrijednost broj2 preko pokaziva�a.
	p = &broj2;
	*p = 5.5;
	cout << *p << endl;
	//g) Ispisati adresu varijable broj1.
	cout << &broj1 << " " << p;
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;
	

int main(){
	//a) Deklarirati dvije varijable tipa float (broj1 i broj2).
	float broj1,broj2;
	//b) Inicijalizirati varijablu broj1 vrijednošæu 7.3.
	broj1 = 7.3;
	//c) Deklarirati pokazivaè na tip podatka float.
	float *p; //float* p
	//d) Inicijalizirati pokazivaè na adresu varijable broj1.
	p = &broj1;
	//e) Ispisati vrijednost varijable na koju upuæuje pokazivaè koristeæi dereferenciranje pokazivaèa.
	cout << *p;
	cout << endl;
	//f) Neka pokazivaè pokazuje na varijablu broj2. Dodjelite proizvoljnu vrijednost u broj2 preko pokazivaèa. Ispišite vrijednost broj2 preko pokazivaèa.
	p = &broj2;
	*p = 5.5;
	cout << *p << endl;
	//g) Ispisati adresu varijable broj1.
	cout << &broj1 << " " << p;
	cout << endl;
	system("pause");
	return 0;
}

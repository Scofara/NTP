#include <iostream>
using namespace std;
	//Pokazivaci

int main(){
	int a,b;
	a = 10;
	int *p; //Deklarisanje pokazivaca na tip int
	
	p = &a; //pokazivacu dodjelujemo adresu varijable a
	
	cout << "Na adresi: " << p << " nalazi se vrijednost: " << *p;
	cout << endl;
	system("pause");
	return 0;
}

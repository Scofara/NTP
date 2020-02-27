#include <iostream>
#include <cmath>
using namespace std;

void promijeni_predznak(int *p){
	*p *= -1;
	//*p = *p * -1
	//*p = -*p
}

int main(){
	int *p1;
	p1 = new int;
	cout << "Unesite jedan broj: ";
	cin >> *p1;
	//p1++ - greska - inkrement adrese
	//*p1++ - greska - inkrement adrese a zatim dereferenciranje te adrese
	(*p1)++;
	promijeni_predznak(p1);	
	cout << "Promijenjen predznak: " << *p1;
	int d;
	delete p1;
	p1 = &d;
	
	*p1 = 5;
	
	promijeni_predznak(&d);
	cout << endl;
	cout << "Promijenjen predznak: " << d;
 	promijeni_predznak(p1);
	cout << endl;
	cout << "Promijenjen predznak: " << *p1;
	cout << endl;
	system("pause");
	return 0;
}

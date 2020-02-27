#include <iostream>
using namespace std;
/*
	Napravite funkciju void infoKruznica, èiji je ulazni 
	parametar podatak tipa kruznica. Funkcija treba 
	ispisati osobine kružnice u sljedeæem obliku:
	
	infoKruznica
	centar O(1.4, 2.5) 
	polupreènik r = 12
	
	Zatim, iskoristite ovu funkciju da bi ispisali osobine 
	kružnice K1 i K2 iz zadatka br. 2.

*/
struct Tacka{
	float x,y;
};
struct Trougao{
	Tacka A,B,C;
};
struct Kruznica{
	Tacka O;
	float r;
};
void infoKruznica(Kruznica k){
	cout << "infoKruznica\n";
	cout << "centar O(" << k.O.x << "," << k.O.y << ")\n";
	cout << "poluprecnik r = " << k.r;
}
int main(){
	//a)
	Trougao T1;
	cout << "Unijeti koordinate tacki trougla: \n";
	cout << "A: ";
	cin >> T1.A.x >> T1.A.y;
	cout << "B: ";
	cin >> T1.B.x >> T1.B.y;
	cout << "C: ";
	cin >> T1.C.x >> T1.C.y;
	//b)
	Kruznica K1;
	K1.O = T1.A;
	//c)
	cout << "Unesite poluprecnik kruznice K1: ";
	cin >> K1.r;
	//d)
	Kruznica K3;
	K3 = K1;
	//e)
	K3.r *= 1.1; //povecanje za 10% ili sada iznosi 110%
	//f)
	Kruznica K2;
	K2.O = T1.B;
	K2.r = K3.r;
	infoKruznica(K1);
	cout << endl;
	infoKruznica(K2);
	cout << endl;
	system("pause");
	return 0;
}

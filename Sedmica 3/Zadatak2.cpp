#include <iostream>
using namespace std;
/*
Deklarišite strukturu trougao i kruznica:
	a. kreirajte troguao T1 èije æete koordinate 
	taèaka A, B i C uèitati sa tastature 
	b. kreirajte kružnicu K1, èiji se centar nalazi 
	u taèki A trougla T1 
	c. vrijednost polupreènika kružnice K1 uèitajte sa tastature
	d. kreirajte kružnicu K3 sa istim osobinama 
	kao kružnica K1, tj. K1 iskopirajte u novi K3
	e. poveæajte polupreènik kružnice K3 za 10%
	f. kreirajte kružnicu K2 koja se nalazi na taèki 
	B sa istim polupreènikom kao kod K3
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
	cout << "K2 kruznica: O(" << K2.O.x << "," << K2.O.y << ") ima"
	     << " poluprecnik r = " << K2.r;
	
	cout << endl;
	system("pause");
	return 0;
}

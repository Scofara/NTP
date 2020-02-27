#include <iostream>
using namespace std;
/*
Deklari�ite strukturu trougao i kruznica:
	a. kreirajte troguao T1 �ije �ete koordinate 
	ta�aka A, B i C u�itati sa tastature 
	b. kreirajte kru�nicu K1, �iji se centar nalazi 
	u ta�ki A trougla T1 
	c. vrijednost polupre�nika kru�nice K1 u�itajte sa tastature
	d. kreirajte kru�nicu K3 sa istim osobinama 
	kao kru�nica K1, tj. K1 iskopirajte u novi K3
	e. pove�ajte polupre�nik kru�nice K3 za 10%
	f. kreirajte kru�nicu K2 koja se nalazi na ta�ki 
	B sa istim polupre�nikom kao kod K3
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

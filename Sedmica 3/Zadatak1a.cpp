#include <iostream>
using namespace std;
/*Deklarišite strukturu krunica i instancirajte 
  objekte k1, k2, k3 i k4 u glavnom programu. 
  Dodijelite vrijednosti obiljejima tako:
  a) da se centar krunice k1 nalaziti u prvom kvadrantu 
     koordinatnog sistema, k2 u drugom, k3 u treæem, 
     a k4 u èetvrtom kvadrantu 
  b) sa tastature uèitajte vrijednost polupreènika krunice k1 
  c) neka polupreènik krunice k2 bude iste velièine kao kod k1
  d) neka polupreènik krunice k3 bude duplo veæi od k2
  e) neka polupreènik krunice k4 bude zbir polupreènika od k2 i k3
*/
struct Kruznica{
	float x,y,r; //x i y koordinate centra, r - poluprecnik
};
int main(){
	Kruznica k1,k2,k3,k4;
	//a)
	k1.x = 2;	//1 kvadrant x,y>0
	k1.y = 3;
	k2.x = -4;	//2 kvadrant x<0 i y>0
	k2.y = 6;
	k3.x = -1;	//3 kvadrant x,y<0
	k3.y = -5;
	k4.x = 3;	//4 kvadrant x>0 i y<0
	k4.y = -1;
	//b)
	cout << "Unesite poluprecnik kruznice k1: ";
	cin >> k1.r;
	//c)
	k2.r = k1.r;
	//d)
	k3.r = 2*k2.r;
	//e)
	k4.r = k2.r+k3.r;
	cout << "Kruznica iz I kvadranta sa centrom O(" << k1.x << ","
		 << k1.y << ") ima isti poluprecnik kao kruznica O(" << k2.x
		 << "," << k2.y << ") iz II kvadranta i iznosi r = " << k1.r;
	cout << "\nKruznica O(" << k3.x << "," << k3.y << ") iz III kvadranta"
	     << " ima duplo veci poluprecni (r = " << k3.r << ") od kruznice"
		 << " O(" << k2.x << "," << k2.y << ")";
	cout << "\nKruznica O(" << k4.x << "," << k4.y << ") ima poluprecnik (r = "
	     << k4.r << ") koji predstavlja zbir poluprecnika kruznica O("
	     << k2.x << "," << k2.y << ") i O(" << k3.x << "," << k3.y << ")";
	cout << endl;
	system("pause");
	return 0;
}

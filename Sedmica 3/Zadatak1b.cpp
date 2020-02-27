#include <iostream>
using namespace std;
/*
	Prepraviti Zadatak1a, tako da imamo strukturu Tacka
	sa clanovima float x,y
*/
struct Tacka{
	float x,y; //x i y koordinate centra
};
struct Kruznica{
	Tacka centar; //centar kruznice
	float r; //r - poluprecnik
};
int main(){
	Kruznica k1,k2,k3,k4;
	//a)
	k1.centar.x = 2;	//1 kvadrant x,y>0
	k1.centar.y = 3;
	k2.centar.x = -4;	//2 kvadrant x<0 i y>0
	k2.centar.y = 6;
	k3.centar.x = -1;	//3 kvadrant x,y<0
	k3.centar.y = -5;
	k4.centar.x = 3;	//4 kvadrant x>0 i y<0
	k4.centar.y = -1;
	//b)
	cout << "Unesite poluprecnik kruznice k1: ";
	cin >> k1.r;
	//c)
	k2.r = k1.r;
	//d)
	k3.r = 2*k2.r;
	//e)
	k4.r = k2.r+k3.r;
	cout << "Kruznica iz I kvadranta sa centrom O(" << k1.centar.x << ","
		 << k1.centar.y << ") ima isti poluprecnik kao kruznica O(" << k2.centar.x
		 << "," << k2.centar.y << ") iz II kvadranta i iznosi r = " << k1.r;
	cout << "\nKruznica O(" << k3.centar.x << "," << k3.centar.y << ") iz III kvadranta"
	     << " ima duplo veci poluprecni (r = " << k3.r << ") od kruznice"
		 << " O(" << k2.centar.x << "," << k2.centar.y << ")";
	cout << "\nKruznica O(" << k4.centar.x << "," << k4.centar.y << ") ima poluprecnik (r = "
	     << k4.r << ") koji predstavlja zbir poluprecnika kruznica O("
	     << k2.centar.x << "," << k2.centar.y << ") i O(" << k3.centar.x << "," << k3.centar.y << ")";
	cout << endl;
	system("pause");
	return 0;
}

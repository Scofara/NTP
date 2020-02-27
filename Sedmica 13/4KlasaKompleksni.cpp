#include <iostream>
#include <cmath>
using namespace std;
	/*
		Napraviti klasu Kompleksni - kompleksne brojeve
		ima dva clana privatna tipa int Re i Im
		- konstruktori
		- destruktor
		- funkcija unos
		- funkcija ispis Re+Imi
		- funkcija pomnozi, mnozi dva kompleksna broja i rezultat je
		kompleksni broj
		- funkcija modul, koja vraca modul kompleksnog broja
	*/

class Kompleksni{
	private:
		int Re,Im;
	public:
		Kompleksni(){this->Re=0;this->Im=0;}
		Kompleksni(int a,int b){this->Re=a; this->Im=b;}
		~Kompleksni(){}
		void unos(){
			cout << "Unesite realni dio:";
			cin >> this->Re;
			cout << "Unesite imaginarni dio:";
			cin >> this->Im;
		}
		void ispis(){
			cout << this->Re << "+" << this->Im << "i.";
		} 
		
		Kompleksni pomnozi(Kompleksni k);
		double modul();
};

Kompleksni Kompleksni::pomnozi(Kompleksni k){
	Kompleksni rezultat;
	rezultat.Re = this->Re*k.Re-this->Im*k.Im;
	rezultat.Im = this->Re*k.Im+this->Im*k.Re;
	return rezultat;
}

double Kompleksni::modul(){
	return sqrt(this->Re*this->Re+this->Im*this->Im);
}
int main(){
	Kompleksni k1,k2(4,8),k3;
	k1.unos();
	k1.ispis();
	cout << endl;
	k2.ispis();
	k3 = k1.pomnozi(k2);
	cout << endl;
	k3.ispis();
	cout << endl;
	cout << k2.modul();
	cout << endl;
	system("pause");
	return 0;
}

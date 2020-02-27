#include <iostream>
#include <string>
using namespace std;

class Osoba{
	public:
		string ime;
		int godine;
		Osoba(){this->ime = "Niko"; this->godine=18;}
		Osoba(string i, int g){this->ime = i; this->godine=g;}
		void unosPodataka();
		
		~Osoba(){
			cout << "Objekat je unisten." << endl;
		}
	private:
		//varijable koje se mogu koristiti samo u klasi
		int brojRacuna;
	protected:
		//varijable koje se mogu korisiti i u naslijeðenim klasama
};

void Osoba::unosPodataka(){
	cout << "Unesite ime:";
	cin >> this->ime;
	cout << "Unesite godine:";
	cin >> this->godine;
	cout << "Unesite broj racuna:";
	cin >> this->brojRacuna;
}

int main(){
	Osoba ja,ti,on("Novi",1982);
	ja.unosPodataka();
	
	cout << ja.ime;
	//cout << ja.brojRacuna; nece raditi
	cout << endl;
	system("pause");
	return 0;
}

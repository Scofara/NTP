#include <iostream>
using namespace std;
#include "strukture.h"

/*
Deklarisati strukturu Datum sa atributima d, m i g.
	Implementirati funkciju koja ispisuje podatke o datumu date
	void info(Datum date)
	Implementirati funkciju koja vraæa objekat tipa 
    Datum sa vrijednostima uèitanih sa tastature
	Datum ucitaj_datum()

Deklarisati strukturu Osoba sa atributima id, ime.
	Implementirati funkciju koja ispisuje podatke o osobi o
	void info(Osoba o)
Ispisati spisak studenata
Odabrati jedno studenta
*/
//globalno definisane osobe

Osoba o1 = {123, "Nina B."};
Osoba o2 = {124, "Jasmin A."};
Osoba o3 = {125, "Denis M."};
Osoba o4 = {126, "Emina J."};
Osoba o5 = {127, "Zanin V."};

Osoba student[5] = {o1,o2,o3,o4,o5};


int main(){
	Datum danas;
	danas = ucitaj_datum();
	info(danas);
	cout << endl;
	for(int i=0;i<5;i++){
		cout << "Student: " << student[i].id << " - " 
		     << student[i].ime << endl;
	}
	int odabir;
	cout << "Odaberite studenta: ";
	cin >> odabir;
	for(int i=0;i<5;i++){
		if(odabir==student[i].id){
			cout << "To je student: " << student[i].ime;
			cout << endl;
		}
	}
	Ispit prviSemestar[3];
	for(int i=0;i<3;i++){
		prviSemestar[i] = ucitaj_ispit();
	}
	prikazi_ispite(prviSemestar,3);
	cout << endl;
	system("pause");
	return 0;
}

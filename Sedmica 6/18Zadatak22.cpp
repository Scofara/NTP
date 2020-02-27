#include <iostream>
using namespace std;

//----------struktura DATUM-------------
struct Datum{
	int d;
	int m;
	int g;
};

void info(Datum* date){
	cout << date->d << "." << date->m << "." << date->g;
}

Datum* ucitaj_datum(){
	Datum* date = new Datum;
	cout << "Unesite dan, mjesec, godinu:" << endl;
	cin >> date->d >> date->m >> date->g;
	return date;
}

//----------struktura OSOBA-------------
struct Osoba{
	char ime[10];
	int id;
};

void info(Osoba* o){
	cout << "Id: \t" << o->id << ", Ime: " << o->ime;
}                   //  (*o).id

Osoba* odaberite_osobu(Osoba* osobe, int max){
	for (int i = 0; i<max; i++){
		info(&osobe[i]); //info(osobe+i);
		cout << endl;
	}

	do{
		cout << "Unesite ID osobe: ";
		int x;
		cin >> x;

		for (int i = 0; i < max; i++){
			if (osobe[i].id == x)
				return &osobe[i];
		}
		cout << "Neispravan Id" << endl;
	}while(true);
}

const int max_s = 10;
Osoba studenti[max_s] = {
	{ "Student J", 101 },
	{ "Student I", 102 },
	{ "Student H", 103 },
	{ "Student G", 104 },
	{ "Student F", 105 },
	{ "Student E", 106 },
	{ "Student D", 107 },
	{ "Student C", 108 },
	{ "Student B", 109 },
	{ "Student A", 110 },
};

const int max_i = 5;
Osoba ispitivaci[max_i] = {
	{ "Nina B.", 534 },
	{ "Jasmin A.", 435 },
	{ "Denis M.", 256 },
	{ "Emina J.", 325 },
	{ "Zanin V.", 914 },
};

struct PrijavaZaIspit{
	Osoba* student;
	Datum* datum_prijave;
	Datum* datum_odjave;
	int ocjena;
};

const int max_p = 100;
struct Ispit{
	Osoba* ispitivac;
	Datum* datum_ispita;
	int brojac_prijavljenih;
	char predmet[10];
	PrijavaZaIspit* prijave = new PrijavaZaIspit[max_p];
};

Ispit* dodaj_ispit(){
	Ispit* i = new Ispit;
	//zadatak: ucitati podatke 
	i->brojac_prijavljenih = 0;

	cout << "Unesite naziv predmeta (bez razmaka)" << endl;
	cin >> i->predmet;

	cout << "Unesite datum ispita: ";
	i->datum_ispita = ucitaj_datum();


	cout << "Ispitivac: ";
	i->ispitivac = odaberite_osobu(ispitivaci, max_i);
	return i;
}


void info(PrijavaZaIspit *p){
	cout << "Student: ";
	info(p->student);
	cout << " Datum prijave: ";
	info(p->datum_prijave);
	cout << " Datum odjave: ";
	info(p->datum_odjave);
	cout << endl;
}

void info(Ispit *i){
	cout << "Predmet: " << i->predmet;

	cout << ", \tDatum ispita: ";
	info(i->datum_ispita);

	cout << ", \tIspitivac: ";
	info(i->ispitivac);

	cout << ", \tBroj prijavljenih: " << i->brojac_prijavljenih << endl;
}

Ispit* odaberite_ispit(Ispit* ispiti, int max){
	for (int i = 0; i<max; i++){
		cout << i + 1 << ": ";
		info(&ispiti[i]);
	}
	cout << "Unesite RB ispita: ";
	int x;
	cin >> x;
	return &ispiti[x - 1];
}

int main()
{
	const int max_ispiti = 10;
	Ispit* ispiti[max_ispiti];
	int brojac_ispita = 0;
	int x;
	do
	{
		cout << "1. Ispiti - prikazi sve" << endl;
		cout << "2. Ispiti - dodaj novi (zakazi novi ispit)" << endl;
		cout << "3. Prijavljeni za ispit: prikazi sve (za ispit x)" << endl;
		cout << "4. Prijavljeni za ispit: dodaj novu prijavu (za ispit x)" << endl;
		cout << "5. Evidentiraj sve ocjene (za ispit x)" << endl;
		cout << "0. EXIT" << endl;
		cin >> x;
		if (x == 1)
		{
			for (int i = 0; i<brojac_ispita; i++)
			{
				info(ispiti[i]);
			}
		}
		if (x == 2)
		{
			Ispit* i = dodaj_ispit();
			ispiti[brojac_ispita] = i;
			brojac_ispita++;
		}
		if (x == 3)
		{
			Ispit* i = odaberite_ispit(*ispiti, brojac_ispita);
			for (int j = 0; j<i->brojac_prijavljenih; j++)
			{
				Osoba* s = i->prijave[j].student;
				Datum* dP = i->prijave[j].datum_prijave;
				Datum* dO = i->prijave[j].datum_odjave;
				info(s);
				cout << "Datum prijave: ";
				info(dP);
				cout << "Datum odjave: ";
				info(dO);
				cout << endl;
			}
		}
		if (x == 4)
		{
			Ispit* i = odaberite_ispit(*ispiti, brojac_ispita);
			PrijavaZaIspit *novaP = new PrijavaZaIspit;
			novaP->student = odaberite_osobu(studenti, max_s);
			novaP->datum_prijave = ucitaj_datum();
			i->prijave[i->brojac_prijavljenih++] = *novaP;
		}
		if (x == 5)
		{
			Ispit* i = odaberite_ispit(*ispiti, brojac_ispita);
			for (int j = 0; j<i->brojac_prijavljenih; j++)
			{
				info(i->prijave[j].student);
				cout << "Unesite ocjenu sa ispita: ";
				cin >> i->prijave[j].ocjena;
			}
		}
	} while (x != 0);
	return 0;
}


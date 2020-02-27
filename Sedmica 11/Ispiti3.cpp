#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

enum godinaStudija {prva=1,druga,treca,cetvrta};
enum nacinStudiranja {redovan,vanredni};
enum odgovori {NETACNO,TACNO};

const int maxPitanja = 100;
const int maxStudenata = 100;
int brojPitanja = 0;
int brojStudenata = 0;

struct Student{
	int brIndeksa;
	char imePrezime[50];
	bool radioTest;
	godinaStudija godina;
	nacinStudiranja nacin;
	odgovori odgovor[maxPitanja];
};

struct Pitanje{
	char tekstPitanja[100];
	odgovori odgovorNaPitanje;
};

Pitanje pitanjaDB[maxPitanja];
Student niz[maxStudenata];

void Dodaj(char *tekstPitanja, odgovori tacanOdgovor){
	Pitanje nekoPitanje;
	strcpy(nekoPitanje.tekstPitanja, tekstPitanja);
	nekoPitanje.odgovorNaPitanje = tacanOdgovor;
	pitanjaDB[brojPitanja] = nekoPitanje;
	brojPitanja++;
}

void DodajDefaultPitanja(){
	Dodaj("Enumeracije i unije su sinonimi?",NETACNO);
	Dodaj("Moguce je kreirati anonimnu uniju?",TACNO);
	Dodaj("Svi clanovi unije koriste istu memorijsku lokaciju?",TACNO);
	Dodaj("Svi clanovi strukture koriste istu memorijsku lokaciju?",NETACNO);
	Dodaj("Unija moze biti deklarisana unutar strukture?",TACNO);
}

void prikaziPitanje(int rbPitanja){
	cout << "\n" << pitanjaDB[rbPitanja].tekstPitanja << endl;
}
odgovori dajTacanOdgovor(int rbPitanja){
	return pitanjaDB[rbPitanja].odgovorNaPitanje;
}

int dajBrojTacnih(Student &s){
	int brTacnih = 0;
	for(int i = 1;i<=brojPitanja;i++){
		if(s.odgovor[i] == dajTacanOdgovor(i)){
			brTacnih++;
		}
	}
	return brTacnih;	
}
void pokreniTest(Student &s){
	for(int i = 0;i<brojPitanja;i++){
		cout << i+1 << ". pitanje: ";
		prikaziPitanje(i);
		cout << "0 - Netacno, 1 - Tacno\nOdgovor:";
		int x;
		cin >> x;
		s.odgovor[i] = (odgovori)x;
	}
	s.radioTest = true;
}
void unosPodataka(Student &s){
		cin.ignore();
		cout << brojStudenata+1 << " student:\n";
		cout << "Unesite ime i prezime:";
		cin.getline(niz[brojStudenata].imePrezime,50);
		cout << "Unesite broj indeksa:";
		cin >> niz[brojStudenata].brIndeksa;
		cout << "Nacin studiranja (0 - Redovan, 1 - Vanredan):";
		int x;
		cin >> x;
		niz[brojStudenata].nacin = (nacinStudiranja)x;
		cout << "Unesite godinu studija(1,2,3,4):";
		cin >> x;
		niz[brojStudenata].godina = (godinaStudija)x;
		cin.ignore();
		niz[brojStudenata].radioTest = false;
		brojStudenata++;
}
int prikaziMeni(){
	int izbor;
	do{
		cout << "Meni:\n";
		cout << "1. Pokreni test\n";
		cout << "2. Prikazi rezultate\n";
		cout << "3. Unos pitanja\n";
		cout << "4. Unos studenta\n";
		cout << "5. Kraj rada\n";
		cout << "Unesite izbor:";
		cin >> izbor;
	}while(izbor<1 || izbor>5);
	return izbor;
}
int prikaziStudente(Student niz[], int max){
	int rb;
	do{
		for(int i=0;i<max;i++){
			cout << i+1 << ". " << niz[i].imePrezime << endl;
		}
		cout << "Unesite redni broj studenta:";
		cin >> rb;
	}while(rb<1 || rb>brojStudenata);
	return rb-1;
}

void unosPitanja(int brPitanja){
	for(int i=0;i<brPitanja;i++){
		cin.ignore();
		cout << "Unesite tekst pitanja:";
		cin.getline(pitanjaDB[brojPitanja].tekstPitanja,100);
		cout << "Unesite odgovor pitanja 0-NETACNO, 1-TACNO\n";
		cout << "Odabir:";
		int x;
		cin >> x;
		pitanjaDB[brojPitanja].odgovorNaPitanje = (odgovori)x;
		brojPitanja++;
	}
}

int main(){
	int max,izbor;
	DodajDefaultPitanja();
	do{
		izbor = prikaziMeni();
		if(izbor == 5){
			break;
		}
		if(izbor == 1){
			Student &st = niz[prikaziStudente(niz,brojStudenata)];
			pokreniTest(st);
		}
		if(izbor == 2){
			Student &st = niz[prikaziStudente(niz,brojStudenata)];
			int t = dajBrojTacnih(st);
			int p = 100*t/(brojPitanja);
			cout << "Uspjeh je " << p << " - (" << t << "/" << brojPitanja << ")" << endl;
			
		}
		if(izbor == 3){
			int n;
			cout << "Unesite broj pitanja za unijeti:";
			cin >> n;
			unosPitanja(n);
		}
		if(izbor == 4){
			unosPodataka(niz[brojStudenata]);
		}
		system("pause");
		system("cls");
	}while(1);
		
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;

enum godinaStudija {prva=1,druga,treca,cetvrta};
enum nacinStudiranja {redovan,vanredni};
enum odgovori {NETACNO,TACNO};

const int brPitanja = 5;

struct Student{
	int brIndeksa;
	char imePrezime[50];
	bool radioTest;
	godinaStudija godina;
	nacinStudiranja nacin;
	odgovori odgovor[brPitanja];
};

void prikaziPitanje(int rbPitanja){
	if(rbPitanja == 1){
		cout << "\nEnumeracije i unije su sinonimi?\n";
	}else if(rbPitanja == 2){
		cout << "\nMoguce je kreirati anonimnu uniju?\n";
	}else if(rbPitanja == 3){
		cout << "\nSvi clanovi unije koriste istu memorijsku lokaciju?\n";
	}else if(rbPitanja == 4){
		cout << "\nSvi clanovi strukture koriste istu memorijsku lokaciju?\n";
	}else{
		cout << "\nUnija moze biti deklarisana unutar strukture?\n";
	}
}
odgovori dajTacanOdgovor(int rbPitanja){
	if(rbPitanja == 1){
		return NETACNO;
	}else if(rbPitanja == 2){
		return TACNO;
	}else if(rbPitanja == 3){
		return TACNO;
	}else if(rbPitanja == 4){
		return NETACNO;
	}else{
		return TACNO;
	}
}
int dajBrojTacnih(Student &s){
	int brTacnih = 0;
	for(int i = 1;i<=brPitanja;i++){
		if(s.odgovor[i] == dajTacanOdgovor(i)){
			brTacnih++;
		}
	}
	return brTacnih;	
}
void pokreniTest(Student &s){
	for(int i = 1;i<=brPitanja;i++){
		cout << i << ". pitanje: ";
		prikaziPitanje(i);
		cout << "0 - Netacno, 1 - Tacno\nOdgovor:";
		int x;
		cin >> x;
		s.odgovor[i] = (odgovori)x;
	}
	s.radioTest = true;
}
void unosPodataka(Student niz[], int max){
	int unos;
	for(int i=0;i<max;i++){
		cout << i+1 << " student:\n";
		cout << "Unesite ime i prezime:";
		cin.getline(niz[i].imePrezime,50);
		cout << "Unesite broj indeksa:";
		cin >> niz[i].brIndeksa;
		cout << "Nacin studiranja (0 - Redovan, 1 - Vanredan):";
		int x;
		cin >> x;
		niz[i].nacin = (nacinStudiranja)x;
		cout << "Unesite godinu studija(1,2,3,4):";
		cin >> x;
		niz[i].godina = (godinaStudija)x;
		cin.ignore();
		niz[i].radioTest = false;
	}
}
int prikaziMeni(){
	int izbor;
	do{
		cout << "\nMeni:\n";
		cout << "1. Pokreni test\n";
		cout << "2. Prikazi rezultate\n";
		cout << "3. Kraj rada\n";
		cout << "Unesite izbor:";
		cin >> izbor;
	}while(izbor<1 || izbor>3);
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
	}while(rb<1 || rb>=max);
	return rb-1;
}
int main(){
	int max,izbor;
	cout << "Unesite broj studenata:";
	cin >> max;
	cin.ignore();
	Student *niz = new Student[max];
	unosPodataka(niz,max);
	system("cls");
	do{
		izbor = prikaziMeni();
		if(izbor == 3){
			break;
		}
		int s = prikaziStudente(niz,max);
		if(izbor == 1){
			Student &st = niz[s];
			pokreniTest(st);
		}
		if(izbor == 2){
			Student &st = niz[s];
			int t = dajBrojTacnih(st);
			int p = 100*t/brPitanja;
			cout << "Uspjeh je " << p << " - (" << t << "/" << brPitanja << ")" << endl;
			
		}
		system("pause");
		system("cls");
	}while(1);
	
	delete[] niz;
	niz = NULL;	
	cout << endl;
	system("pause");
	return 0;
}

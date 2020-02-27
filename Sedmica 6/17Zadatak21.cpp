#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct radnik{ 
 	int ib;  	
	char ime[10];  
	char prezime[10];  	
	double dohodak[12];  	
	int staz; 
	char spol[10]; 
}; 

void unos(radnik *, int);
void ispis(radnik *); 
int prebroji_zene(radnik *, int);
void kopiraj_zene(radnik *, radnik *, int);
radnik * najduze_prezime(radnik *, int);
void pretraga_po_imenu(radnik *, char *, int);
double prihodi(radnik *, int, int);

int main(){
	int brRadnika;
	cout << "Koliko radnika imate: ";
	cin >> brRadnika;
	
	radnik *nizRadnika = new radnik[brRadnika];
	cout << "Unos podataka za radnike:\n";
	unos(nizRadnika,brRadnika);
	
	cout << "\nIspis podataka za radnike:\n";
	for(int i=0;i<brRadnika;i++){
		ispis(&nizRadnika[i]);	
	}
	int brZena;
	brZena = prebroji_zene(nizRadnika,brRadnika);
	
	radnik *nizZena = new radnik[brZena];
	
	kopiraj_zene(nizRadnika,nizZena,brRadnika);
	cout << "Ispis samo ljepsih radnika:\n";
	for(int i=0;i<brZena;i++){
		ispis(&nizZena[i]);	
	}
	//Ispis radnika sa najduzim prezimenom
	cout << "Radnik sa najduzim prezimenom je:\n";
	ispis(najduze_prezime(nizRadnika,brRadnika));
	
	char traziIme[10];
	cout << "Unesite ime za pretragu: ";
	cin.getline(traziIme,10);
	pretraga_po_imenu(nizRadnika,traziIme,brRadnika);
	
	int IB;
	cout << "Unesite IB radnika:";
	cin >> IB;
	cout << "Godisnji dohodak radnika sa IB: " << IB << " iznosi: " << prihodi(nizRadnika,brRadnika,IB) << " KM" << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

void unos(radnik *niz, int vel){
	for(int i = 0;i<vel;i++){
		cout << "Unesite podatke za " << i+1 << ". osobu:\n";
		cout << "IB: ";
		cin >> niz[i].ib;
		cin.ignore();
		cout << "Ime: ";
		cin.getline(niz[i].ime,10);
		cout << "Prezime: ";
		cin.getline(niz[i].prezime,12);
		
		for(int j=0;j<12;j++){
			cout << "Mjesec " << j+1 << ". iznos:\n";
			cin >> niz[i].dohodak[j];
		}
		
		cout << "Staz: ";
		cin >> niz[i].staz;
		cin.ignore();
		cout << "Spol: ";
		cin.getline(niz[i].spol,10);
		cin.ignore();
		cout << endl;
	}
}
void ispis(radnik *niz){
	cout << "IB: " << niz->ib << endl;
	cout << "Ime: " << niz->ime << endl;
	cout << "Prezime: " << niz->prezime << endl;
	
	for(int i=0;i<12;i++){
		cout << "Mjesec " << setw(3) << i+1 << ":" << setw(5) << niz->dohodak[i] << endl; 
	}
	
	cout << "Staz: " << niz->staz << endl;
	cout << "Spol: " << niz->spol << endl;	
}
int prebroji_zene(radnik *niz, int vel){
	int brojac=0;
	for(int i = 0;i<vel;i++){
		if(strcmp(niz[i].spol,"zenski")==0){
			//funkcija strcmp usporeðuje dva niza karaktera i ako su
			//isti vraæa vrijednost 0
			brojac++;
		}
	}
	return brojac;
}
void kopiraj_zene(radnik *nizR,radnik *nizZ, int vel){
	int br = 0;
	for(int i=0;i<vel;i++){
		if(strcmp(nizR[i].spol,"zenski")==0){
			nizZ[br]=nizR[i];
			br++;
		}
	}
}
radnik* najduze_prezime(radnik *nizR,int vel){
	int brSlova, pom=0;
	radnik* p = 0;
	for(int i=0;i<vel;i++){
		pom = strlen(nizR[i].prezime);
		if(pom>brSlova){
			brSlova = pom;
			p = nizR+i;
		}
	}
	return p;
}
void pretraga_po_imenu(radnik *nizR, char *ime, int vel){
	for(int i=0;i<vel;i++){
		if(strcmp(nizR[i].ime,ime)==0){
			cout << "Postoji radnik/ca sa tim imenom: \n";
			ispis(&nizR[i]);
		}
	}
}
double prihodi(radnik *nizR,int vel, int IB){
	double plata=0;
	for(int i=0;i<vel;i++){
		if(nizR[i].ib == IB){
			for(int j=0;j<12;j++){
				plata += nizR[i].dohodak[j]+nizR[i].dohodak[j]*0.06;
			//	plata += nizR[i].dohodak[j]*1.06; 
			}
		}
	}
	return plata;
}

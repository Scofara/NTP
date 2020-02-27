#include <iostream>
using namespace std;

struct Bolnica{
	char naziv[100];
	char grad[100];
	int brZaposlenih;
};

struct Odjel{
	Bolnica bolnica;
	char naziv[100];
	float cijenaPoDanu;
};

struct Pacijent{
	char imePrezime[100];
	Odjel odjel;
	int godiste;
	bool osiguran;
};

void unosPacijenta(Pacijent *p,int n){
	for(int i=0;i<n;i++){
		cout << "Unos " << i+1 << ". pacijenta\n";
		cout << "Unijeti ime i prezime pacijenta: ";
		cin.getline(p[i].imePrezime,99);
		cout << "Unesite naziv bolnice u kojoj je pacijent: ";
		cin.getline(p[i].odjel.bolnica.naziv,99);
		cout << "Unesite grad u kojem je bolnica: ";
		cin.getline(p[i].odjel.bolnica.grad,99);
		cout << "Unesite broj zaposlenih u bolnici: ";
		cin >> p[i].odjel.bolnica.brZaposlenih; 
		cout << "Unesite naziv odjela na kojem je pacijent: ";
		cin.ignore();
		cin.getline(p[i].odjel.naziv,99);
		cout << "Unesite cijenu lezanja jednog dana na odjelu: ";
		cin >> p[i].odjel.cijenaPoDanu;
		cout << "Unesite godiste pacijenta: ";
		cin >> p[i].godiste;
		cout << "Da li je pacijent osiguran:\n 0 = NE \n 1 = DA \nOdabir:";
		cin >> p[i].osiguran;
		cin.ignore();
	}
}

void ispisPacijenta(Pacijent s){
	cout << "\n-----------------------------------\n";
	cout << "Podaci o pacijentu:\n";
	cout << "Ime i prezime: " << s.imePrezime << endl;
	cout << "Bolnica: " << s.odjel.bolnica.naziv << " iz grada " << s.odjel.bolnica.grad << ". (" << s.odjel.bolnica.brZaposlenih << " zaposlenih)" << endl;
	cout << "Odjel: " << s.odjel.naziv << " - " << s.odjel.cijenaPoDanu << " KM po danu." << endl;
	cout << "Godina: " << 2019-s.godiste << endl;
	cout << "Osiguran: ";
	if(s.osiguran){
		cout << "DA";
	}else{
		cout << "NE";
	}
	cout << "\n-----------------------------------\n";
}

void promjenaBolnice(Pacijent &p){
	cout << "Pacijent " << p.imePrezime << " se premjesta iz bolnice " << p.odjel.bolnica.naziv << " u bolnicu: \n";
	cout << "Naziv nove bolnice: ";
		cin.getline(p.odjel.bolnica.naziv,99);
		cout << "Unesite grad u kojem je nova bolnica: ";
		cin.getline(p.odjel.bolnica.grad,99);
		cout << "Unesite broj zaposlenih u novoj bolnici: ";
		cin >> p.odjel.bolnica.brZaposlenih; 
		cin.ignore();
		cout << "Ostaje na odjelu: " << p.odjel.naziv << endl;
		cout << "Unesite cijenu lezanja jednog dana na odjelu: ";
		cin >> p.odjel.cijenaPoDanu;
}
int main(){
	int brP;
	cout << "Unesite broj pacijenata za unos: ";
	cin >> brP;
	cin.ignore();
	Pacijent *pacijenti = new Pacijent[brP];
	unosPacijenta(pacijenti,brP);
	for(int i=0;i<brP;i++){
		ispisPacijenta(pacijenti[i]);
	}
	promjenaBolnice(pacijenti[1]);
	for(int i=0;i<brP;i++){
		ispisPacijenta(pacijenti[i]);
	}
	
	
	delete[] pacijenti;
	cout << endl;
	system("pause");
	return 0;
}

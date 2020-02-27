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

Pacijent unosPacijenta(){
	Pacijent novi;
	cout << "Unijeti ime i prezime pacijenta: ";
	cin.getline(novi.imePrezime,99);
	cout << "Unesite naziv bolnice u kojoj je pacijent: ";
	cin.getline(novi.odjel.bolnica.naziv,99);
	cout << "Unesite grad u kojem je bolnica: ";
	cin.getline(novi.odjel.bolnica.grad,99);
	cout << "Unesite broj zaposlenih u bolnici: ";
	cin >> novi.odjel.bolnica.brZaposlenih; 
	cout << "Unesite naziv odjela na kojem je pacijent: ";
	cin.ignore();
	cin.getline(novi.odjel.naziv,99);
	cout << "Unesite cijenu lezanja jednog dana na odjelu: ";
	cin >> novi.odjel.cijenaPoDanu;
	cout << "Unesite godiste pacijenta: ";
	cin >> novi.godiste;
	cout << "Da li je pacijent osiguran:\n 0 = NE \n 1 = DA \nOdabir:";
	cin >> novi.osiguran;
	cin.ignore();
	return novi;
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

float cijena(Odjel o, int n){
	if(n==1){
		return o.cijenaPoDanu;
	}else{
		return cijena(o,n-1)*0.95;
	}
}
int main(){
	
	Pacijent prvi;
	prvi = unosPacijenta();
	
	ispisPacijenta(prvi);
	int n;
	cout << "Unesite dan za koji zelite provjeriti cijenu: ";
	cin >> n;
	cout << "Cijena " << n << ". dana iznosi: " << cijena(prvi.odjel,n) << " KM." << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

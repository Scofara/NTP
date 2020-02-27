#include <iostream>
using namespace std;

struct Drzava{
	char naziv[100];
	char kontinent[100];
	int brStanovnika;
};

struct Grad{
	Drzava drzava;
	char naziv[100];
	int brStanovnika;
};

struct Stanovnik{
	char imePrezime[100];
	Grad grad;
	int godiste;
	bool zaposlen;
};

void unosStanovnika(Stanovnik *s, int n){
	for(int i=0;i<n;i++){
		cout << "Unijeti ime i prezime stanovnika: ";
		cin.getline(s[i].imePrezime,99);
		cout << "Unesite naziv drzave iz koje je stanovnik: ";
		cin.getline(s[i].grad.drzava.naziv,99);
		cout << "Unesite kontinent drzave: ";
		cin.getline(s[i].grad.drzava.kontinent,99);
		cout << "Unesite broj stanovnika drzave: ";
		cin >> s[i].grad.drzava.brStanovnika; 
		cout << "Unesite naziv grada iz kojeg je stanovnik: ";
		cin.ignore();
		cin.getline(s[i].grad.naziv,99);
		cout << "Unesite broj stanovnika grada: ";
		cin >> s[i].grad.brStanovnika;
		cout << "Unesite godiste stanovnika: ";
		cin >> s[i].godiste;
		cout << "Da li je stanovnik zaposlen:\n 0 = NE \n 1 = DA \nOdabir:";
		cin >> s[i].zaposlen;
		cin.ignore();
	}
}

void ispisStanovnika(Stanovnik s){
	cout << "\n-----------------------------------\n";
	cout << "Podaci o stanovniku:\n";
	cout << "Ime i prezime: " << s.imePrezime << endl;
	cout << "Grad: " << s.grad.naziv << " (" << s.grad.brStanovnika << " stanovnika)" << endl;
	cout << "Drzava: " << s.grad.drzava.naziv << " - " << s.grad.drzava.kontinent << " (" << s.grad.drzava.brStanovnika << " stanovnika)" << endl;
	cout << "Godina: " << 2019-s.godiste << endl;
	cout << "Zaposlenje: ";
	if(s.zaposlen){
		cout << "DA";
	}else{
		cout << "NE";
	}
	cout << "\n-----------------------------------\n";
}

void selidba(Stanovnik &p){
	cout << "Promjena podataka za stanovnika: " << p.imePrezime << endl;;
	cout << "Unesite naziv drzave u koju je preselio stanovnik: ";
	cin.getline(p.grad.drzava.naziv,99);
		cout << "Unesite kontinent drzave: ";
		cin.getline(p.grad.drzava.kontinent,99);
		cout << "Unesite broj stanovnika drzave: ";
		cin >> p.grad.drzava.brStanovnika; 
		cout << "Unesite naziv grada u koji je preselio stanovnik: ";
		cin.ignore();
		cin.getline(p.grad.naziv,99);
		cout << "Unesite broj stanovnika grada: ";
		cin >> p.grad.brStanovnika;
}


int main(){
	int brS;
	cout << "Unesite broj stanovnika za unijeti: ";
	cin >> brS;
	cin.ignore();
	Stanovnik *stanovnici = new Stanovnik[brS];
	unosStanovnika(stanovnici,brS);
	for(int i=0;i<brS;i++){
		ispisStanovnika(stanovnici[i]);
	}
	selidba(stanovnici[1]);
	cout << endl;
	system("pause");
	return 0;
}

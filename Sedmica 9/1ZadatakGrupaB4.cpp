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

Stanovnik unosStanovnika(){
	Stanovnik novi;
	cout << "Unijeti ime i prezime stanovnika: ";
	cin.getline(novi.imePrezime,99);
	cout << "Unesite naziv drzave iz koje je stanovnik: ";
	cin.getline(novi.grad.drzava.naziv,99);
	cout << "Unesite kontinent drzave: ";
	cin.getline(novi.grad.drzava.kontinent,99);

	cout << "Unesite broj stanovnika drzave: ";
	cin >> novi.grad.drzava.brStanovnika; 
	cout << "Unesite naziv grada iz kojeg je stanovnik: ";
	cin.ignore();
	cin.getline(novi.grad.naziv,99);
	
	cout << "Unesite broj stanovnika grada: ";
	cin >> novi.grad.brStanovnika;
	cout << "Unesite godiste stanovnika: ";
	cin >> novi.godiste;
	cout << "Da li je stanovnik zaposlen:\n 0 = NE \n 1 = DA \nOdabir:";
	cin >> novi.zaposlen;
	cin.ignore();
	return novi;
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

int prirastajStanovnika(Drzava d, int n){
	if(n==1){
		return d.brStanovnika;
	}else{
		return prirastajStanovnika(d,n-1)*1.01;
	}	
}


int main(){
	
	Stanovnik prvi;
	prvi = unosStanovnika();
	
	ispisStanovnika(prvi);
	int n;
	cout << "Unesite broj godina za koji zelite vidjeti prirastaj stanovnika drzave unesenog stanovnika: ";
	cin >> n;
	cout << "Nakon " << n << " godina ce biti " << prirastajStanovnika(prvi.grad.drzava,n) << " stanovnika.";	
	cout << endl;
	system("pause");
	return 0;
}

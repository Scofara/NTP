
struct Datum{
	int d,m,g;
};

struct Osoba{
	int id;
	char ime[20];
};

struct Ispit{
	Osoba ispitivac;
	Datum datum_ispita;
	char predmet[20];
};

void info(Datum date){
	cout << date.d << "." << date.m << "." << date.g;
}
Datum ucitaj_datum(){
	Datum rez;
	cout << "Unesite dan: ";
	cin >> rez.d;
	cout << "Unesite mjesec: ";
	cin >> rez.m;
	cout << "Unesite godinu: ";
	cin >> rez.g;
	return rez;
}
void info(Osoba o){
	cout << o.id << " - " << o.ime;
}
Ispit ucitaj_ispit(){
	Ispit rez;
	cout << "Unesite id ispitivaca: ";
	cin >> rez.ispitivac.id;
	cout << "Unesite ime ispitivaca: ";
	cin >> rez.ispitivac.ime;
	cout << "Unesite datum ispita: \n";
	rez.datum_ispita = ucitaj_datum();
	cout << "Unesite predmet:";
	cin >> rez.predmet;
	return rez;
}
void prikazi_ispite(Ispit ispit[], int max){
	for(int i = 0;i<max;i++){
		cout << "\n------------------\n";
		cout << i+1 << ". ispit:\n";
		info(ispit[i].datum_ispita);
		cout << endl;
		info(ispit[i].ispitivac);
		cout << endl;
		cout << ispit[i].predmet;
		cout << "\n------------------";
		
	}
}

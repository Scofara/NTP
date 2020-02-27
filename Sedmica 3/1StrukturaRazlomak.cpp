#include <iostream>
using namespace std;
	/*
		struct imeStrukture{
			clanovi strukture
		};
		Definisat strukturu Razlomak
	*/
struct Razlomak{
	int brojnik,nazivnik;   //definisanje dva clana tipa int
};
void unesi(Razlomak &r){
	cout << "Unesite brojnik: "; 
	cin >> r.brojnik;
	cout << "Unesite nazivnik: ";
	cin >> r.nazivnik;	
}
void ispis(Razlomak r){
	cout << r.brojnik << "/" << r.nazivnik;
}
Razlomak saberi(Razlomak a1, Razlomak a2){ //povratni tip je struktura Razlomak
	Razlomak rez;
	rez.nazivnik = a1.nazivnik*a2.nazivnik;
	rez.brojnik = a1.brojnik*a2.nazivnik+a2.brojnik*a1.nazivnik;
	return rez;
}

int main(){
	Razlomak r1,r2,r3;
	r1.brojnik = 3; // . koristimo da pristupimo èlanu strukture
	r1.nazivnik = 4;
	cout << r1.brojnik << "/" << r1.nazivnik;
	cout << endl;
	unesi(r2);
	ispis(r2);
	r3 = saberi(r1,r2);
	cout << endl;
	ispis(r1);           //ispis sabiranja 2 razlomka
	cout << " + ";
	ispis(r2);
	cout << " = ";
	ispis(r3);
	cout << endl;
	system("pause");
	return 0;
}

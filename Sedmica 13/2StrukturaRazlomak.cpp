#include <iostream>
using namespace std;

/*
	Napraviti strukturu Razlomak, koja ima èlanove 
	int brojnik,nazivnik.
	- konstruktor defaultni koji daje vrijednost 
	brojnik = 0, nazivni = 1
	- konstruktor koji prosljeðuje brojnik i nazivnik
	- funkcija unos
	- funkcija ispis brojnik/nazivnik
	- funkciju skratiRazlomak, koja dovodi razlomak
	na najednostavniji oblik
	- funkciju saberi koja sabire dva razlomka i rezultat
	je razlomak
	- funkcija decimalni - pretvara razlomak u decimalni broj 
*/

struct Razlomak{
	int brojnik,nazivnik;
	Razlomak(){brojnik=0; nazivnik=1;}
	Razlomak(int a,int b){brojnik = a; nazivnik=b;}
	void unos(){
		cout << "Unesite brojnik:";
		cin >> brojnik;
		do{
			cout << "Unesite nazivnik:";
			cin >> nazivnik;
		}while(nazivnik==0);
	}
	
	void ispis(){
		cout << brojnik << "/" << nazivnik;
	}
	
	void skratiRazlomak(){
		int a,b;
		int r,x;
		a = brojnik;
		b = nazivnik;
		do{
			r = a%b;
			x = a/b;
			a = b;
			b = r;		
		}while(r!=0);
		brojnik = brojnik/a;
		nazivnik = nazivnik/a;
	}
	
	Razlomak saberi(Razlomak r){
		Razlomak rezultat;
		rezultat.nazivnik = nazivnik*r.nazivnik;
		rezultat.brojnik = brojnik*r.nazivnik+nazivnik*r.brojnik;
		rezultat.skratiRazlomak();
		return rezultat;
	}
	
	double decimalni(){
		return (double)brojnik/(double)nazivnik;
	}
};

int main(){
	Razlomak r1,r2(4,5),r3,r4;
	r3.unos();
	r1.ispis();
	cout << endl;
	r3.ispis();
	r3.skratiRazlomak();
	cout << endl;
	r3.ispis();
	cout << endl;
	r4 = r2.saberi(r3);
	r2.ispis();
	cout << " + ";
	r3.ispis();
	cout << " = ";
	r4.ispis();
	cout << endl;
	cout << r2.decimalni();
	cout << endl;
	system("pause");
	return 0;
}

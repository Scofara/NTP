#include <iostream>
using namespace std;
	/*
		Napisati rekurzivnu funkciju za sljede�i problem:
		Izra�unati sumu brojeva, koje je korisnik unio. Rekurzivna
		funkcija treba zahtijevati unos sve dok se ne unese 0
		Rije�iti bez kori�tenja petlji.
	*/
int suma(){
	int x;
	cout << "Unesite broj: ";
	cin >> x;
	if(x==0){
		return 0;
	}else{
		return suma()+x;
	}
}

int main(){
	int s;
	s = suma();
	cout << "Suma unesenih brojeva: " << s;
	
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;
	/*
		Napisati rekurzivnu funkciju koja æe zahtijevati od korisnika
		unos pozitivnih brojeva sve dok korisnik ne unese negativan broj
		ili 0. Povratna vrijednost iz funkcije je maksimalni uneseni
		element
	*/
int maksElement(int max){
	int x;
	cout << "Unesite broj: ";
	cin >> x;
	if(x<=0){
		return max;
	}else{
		if(x>max){
			max = x;
		}
		return maksElement(max);
	}
}

int main(){
	int a = 0;
	int b;
	b = maksElement(a);
	cout << "Maksimalni uneseni element iznosi: " << b;
	
	
	cout << endl;
	system("pause");
	return 0;
}

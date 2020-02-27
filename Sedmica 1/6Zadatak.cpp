#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
	/*
		Napraviti program koji generise 15 slucajnih brojeva
		iz intervala 27-93. Potrebno je napraviti funkciju
		koja date brojeve koji su manji od posljednjeg generisanog
		broja smejsta u novi niz
	*/
int brVecih=0;
void veciBrojevi(int X1[], int X2[]){
	for(int i=0;i<15;i++){
		if(X1[i]>X1[14]){
			X2[brVecih] = X1[i];
			brVecih++;
		}
	}
}
int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int brojevi[15], noviNiz[14];
	for(int i=0;i<15;i++){
		brojevi[i] = rand()%67+27;
	}
	cout << "Pocetni niz brojeva:\n";
	for(int i=0;i<15;i++){
		cout << brojevi[i] << " ";
	}
	cout << "\nNiz brojeva vecih od posljednjeg broja " 
	     << brojevi[14] << " su:\n";
	veciBrojevi(brojevi,noviNiz);
	for(int i=0;i<brVecih;i++){
		cout << noviNiz[i] << " ";
	}
	return 0;
}


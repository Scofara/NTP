#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
	/*
		Napraviti program koji generise 20 slucajnih
		brojeva iz intervala 10 - 50 u niz.
		Zatim napraviti funkciju koja ispisuje brojeve
		koji nisu prosti
		Ispisati pocetni niz i trazeni niz
	*/
bool prost(int broj){
	int br=0;
	for(int i=2;i<broj/2;i++){
		if(broj%i==0){
			br++;
		}
	}
	if(br>0){
		return false;
	}else{
		return true;
	}
}	
	
void ispisSlozeni(int A[]){
	for(int i=0;i<20;i++){
		if(!prost(A[i])){
			cout << A[i] << " ";
		}
	}
}
int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	int brojevi[20];
	for(int i=0;i<20;i++){
		brojevi[i] = rand()%41+10;
	}
	cout << "Pocetni niz brojeva:\n";
	for(int i=0;i<20;i++){
		cout << brojevi[i] << " ";
	}
	cout << "\nNiz brojeva bez prostih brojeva:\n";
	ispisSlozeni(brojevi);
	return 0;
}


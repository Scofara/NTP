#include <iostream>
using namespace std;

void ispis(int* p,int v){
	for(int i = 0;i<v;i++){
		cout << i+1 << ": " << p[i] << endl;
	}
}

int ucitaj(int* p,int v){
	int brojac=0;
	cout << "Unesite elemente niza:\n";
	for(int i = 0;i<v;i++){
		cout << i+1 << ": ";
		cin >> p[i];
		if(p[i]<0){
			brojac++;
		}
	}
	return brojac;
}
void inicijalizacija_niza(int* p1,int* p2,int v){
	int br=0;
	for(int i = 0;i<v;i++){
		if(p1[i]<0){
			p2[br] = p1[i];
			br++;
		}
	}
}
int main(){
	int v1,v2;
	cout << "Unesite velicinu prvog niza: ";
	cin >> v1;
	int* niz1 = new int[v1];
	
	v2 = ucitaj(niz1,v1); //uèitavam elemente niza1 i odreðujem velièinu niza2
	
	int* niz2 = new int[v2];
	inicijalizacija_niza(niz1,niz2,v1);
	cout << "Prvi niz ima " << v2 << " elemenata manjih od nule:\n";
	ispis(niz2,v2);
	
	delete[] niz1;
	delete[] niz2;
	
	niz1 = NULL;
	niz2 = NULL;
	
	cout << endl;
	system("pause");
	return 0;
}

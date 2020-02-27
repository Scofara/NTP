#include <iostream>
using namespace std;
	/*
		Napraviti funkciju koja uneseni niz 
		sortira (od najmanjeg do najveceg) i ispisuje
	*/
void sortiraj(int X[],int x){
	int temp;
	for(int i=0;i<x;i++){
		for(int j=i;j<x;j++){
			if(X[i]>X[j]){
				temp = X[i];
				X[i] = X[j];
				X[j] = temp;	
			}
		}
	}
	cout << "Sortirani niz: \n";
	for(int i=0;i<x;i++){
		cout << X[i] << " ";
	}
}
int main(){
	setlocale(LC_ALL,"");
	int n;
	cout << "Unesite broj clanova niza: ";
	cin >> n;
	int niz[n];
	cout << "Unos clanova niza: \n";
	for(int i=0;i<n;i++){
		cout << i+1 << ". clan: ";
		cin >> niz[i];
	}
	sortiraj(niz,n);
	
	
	return 0;
}


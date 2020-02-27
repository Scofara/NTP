#include <iostream>
using namespace std;

void ispis(int* p,int v){
	for(int i = 0;i<v;i++){
		cout << i+1 << ": " << p[i] << endl;
	}
}

void ucitaj(int* p,int v){
	cout << "Unesite elemente niza:\n";
	for(int i = 0;i<v;i++){
		cout << i+1 << ": ";
		cin >> p[i];
	}
}

void saberi(int* p1,int* p2, int* p3, int v){
	for(int i=0;i<v;i++){
		p3[i] = p1[i] + p2[i];
	}
}

int main(){
	int x;
	cout << "Unesite broj elemenata:";
	cin >> x;
	int* A = new int[x];
	int* B = new int[x];
	ucitaj(A,x);
	ucitaj(B,x);
	
	int* C = new int[x];
	
	saberi(A,B,C,x);
	ispis(C,x);
	
	cout << endl;
	system("pause");
	return 0;
}

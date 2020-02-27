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

int main(){
	int v;
	cout << "Unesite velicinu niza:";
	cin >> v;
	int* N = new int[v]; //dinamièki alociranje memorije niza
	ucitaj(N,v);
	cout << "-------------\n";
	ispis(N,v); 
	cout << endl;
	system("pause");
	return 0;
}

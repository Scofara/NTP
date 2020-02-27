#include <iostream>
using namespace std;

void ucitaj(int** X, int r, int k){
	cout << "Unos elemenata u nizove:\n";
	for(int i=0;i<r;i++){
		cout << "Unesite " << k << " elemenata u niz R" << i+1 << ":\n";
		for(int j=0;j<k;j++){
			cin >> X[i][j];
		}
		cout << endl;
	}
}

void ispis(int** X,int r,int k){
	cout << "Ispis elemenata po nizovima:\n";
	for(int i=0;i<r;i++){
		cout << "Elementi niza R" << i+1 << ":\n";
		for(int j=0;j<k;j++){
			cout << X[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int a,b;
	cout << "Unesite broj redova: ";
	cin >> b;
	cout << "Unesite broj kolona: ";
	cin >> a;
	
	int** M = new int*[b];
	
	for(int i=0;i<b;i++){
		M[i] = new int[a];
	}
	
	ucitaj(M,b,a);
	ispis(M,b,a);
	
	for(int i=0;i<b;i++){
		delete[] M[i];
	}
	
	delete[] M;
	
	cout << endl;
	system("pause");
	return 0;
}

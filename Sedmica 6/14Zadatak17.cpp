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
	const int a = 4;
	const int b = 3;
	
	int** M = new int*[b];
	
	M[0] = new int[a];
	M[1] = new int[a];
	M[2] = new int[a];
	
	ucitaj(M,b,a);
	ispis(M,b,a);
	
	delete[] M[0];
	delete[] M[1];
	delete[] M[2];
	
	delete[] M;
	
	cout << endl;
	system("pause");
	return 0;
}

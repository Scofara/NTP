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
	int R1[a],R2[a],R3[a];
	int *M[b] = {R1,R2,R3};
	
	ucitaj(M,b,a);
	ispis(M,b,a);
	
	cout << endl;
	system("pause");
	return 0;
}

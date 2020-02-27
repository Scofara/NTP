#include <iostream>
using namespace std;


int main(){
	const int a = 4;
	const int b = 3;
	int R1[a],R2[a],R3[a];
	int *M[b] = {R1,R2,R3};
	
	cout << "Unos elemenata u nizove:\n";
	for(int i=0;i<b;i++){
		cout << "Unesite " << a << " elemenata u niz R" << i+1 << ":\n";
		for(int j=0;j<a;j++){
			cin >> M[i][j];
		}
		cout << endl;
	}
	cout << "Ispis elemenata po nizovima:\n";
	for(int i=0;i<b;i++){
		cout << "Elementi niza R" << i+1 << ":\n";
		for(int j=0;j<a;j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	system("pause");
	return 0;
}

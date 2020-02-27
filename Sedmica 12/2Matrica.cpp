#include <iostream>
#include <fstream> 
#include <ctime>
#include <stdlib.h>

using namespace std;
	/*
		Korisnik unosi dimenzije dvodimenzionalnog niza
		i potrebno je generisati toliko sluèajnih brojeva
		27-75 i iste snimiti u fajl matrica.txt	
	*/
int main(){
	int a,b;
	cout << "Unesite broj redova: ";
	cin >> a;
	cout << "Unesite broj kolona: ";
	cin >> b;
	srand(time(NULL));
	
	ofstream matrica("matrica.txt", ios::in); //nece kreirati novu
	
	if(matrica.is_open()){
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				matrica << rand()%49+27 << " ";
			}
			matrica << "\n";
		}
		cout << "Uspjesno uneseni brojevi.";
		matrica.close();		
	}else{
		cout << "Datoteka nije otvorena.";
	}
	
	cout << endl;
	system("pause");
	return 0;
}

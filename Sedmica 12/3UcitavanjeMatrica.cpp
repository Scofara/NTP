#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

int main(){
	int broj;
	string tekst;
	ifstream datoteka("prvi.txt"); //koristimo za ispis iz fajla
	if(datoteka.is_open()){
		while(!datoteka.eof()){
			datoteka >> tekst;
			if(tekst == "Stanje:"){
				datoteka >> broj;
			}
		}
		cout << broj;
		datoteka.close();
	}else{
		cout << "Datoteka nije otvorena.";
	}
	cout << endl;
	system("pause");
	return 0;
}

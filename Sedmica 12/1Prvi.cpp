#include <iostream>
#include <fstream> //biblioteka za rad sa datotekama

using namespace std;

int main(){
	ofstream datoteka; //koristimo za unos u fajl
	datoteka.open("prvi.txt", ios::app);
	if(datoteka.is_open()){
		datoteka << "\nOvo je sad TRECE kompajliranje\n";
		datoteka.close();
	}else{
		cout << "Datoteka nije otvorena!";
	}
	cout << endl;
	system("pause");
	return 0;
}

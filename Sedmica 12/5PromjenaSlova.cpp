#include <iostream>
#include <fstream> 

using namespace std;
	/*
		Potrebno je kreirati dva fajla, u prvi fajl snimiti neki
		tekst i onda i drugi fajle presnimit tekst iz
		prvog fajla, ali sva mala slova pretvoriti u velika slova
		i izbrojati koliko slova je pretvoreno
	*/
int main(){
	ofstream prvi("prva.txt");
	char tekst[200];
	cout << "Unesite tekst:";
	cin.getline(tekst,200);
	prvi << tekst;
	prvi.close();
	
	ifstream prva("prva.txt");
	ofstream drugi("druga.txt");
	
	char a,v;
	int br=0;
	while(prva.get(a)){
		if(islower(a)){
			br++;
			v = toupper(a);
			drugi << v;
		}else{
			drugi << a;
		}	
	}
	prva.close();
	drugi.close();
	cout << "Ukupno je promijenjeno " << br << " slova.";
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
	/*
		Napraviti mali meni:
		1. Kreiranje datoteke
		2. Unos sadrzaja (u neku datoteku) - nije moguce ako
											 ne postoji datoteka
		3. Pregled sadrzaja (iz neke datoteke)
		3. Izlaz
		potrebno	
	*/
int main(){
	int izbor;
	do{
		system("cls");
		cout << "1. Kreiranje datoteke\n";
		cout << "2. Unos sadrzaja\n";
		cout << "3. Pregled sadrzaja\n";
		cout << "4. Kraj\n";
		cout << "Odabir:";
		cin >> izbor;
		if(izbor==1){
			char ime[50];
			cout << "Unesite ime fajla: ";
			cin >> ime;
			ofstream datoteka(ime);
			datoteka.close();
			cout << "Uspjesno kreiran fajl.\n";
			system("pause");
		}
		if(izbor==2){
			char ime[50];
			cin.ignore();
			cout << "Unesite ime datoteke: ";
			cin >> ime;
			ofstream datoteka(ime, ios::in);
			if(datoteka.is_open()){
				datoteka.close();
				ofstream datoteka(ime, ios::app);
				char tekst[300];
				cin.ignore();
				cout << "Unesite tekst:";
				cin.getline(tekst,300);
				datoteka << tekst;
				datoteka << endl;
				datoteka.close();
				cout << "Uspjeno unes tekst.\n";
				system("pause");
			}else{
				cout << "Datoteka sa tim imenom ne postoji.\n";
				system("pause");
			}
		}
		if(izbor==3){
			string linija;
			char ime[50];
			cin.ignore();
			cout << "Unesite ime datoteke: ";
			cin >> ime;
			ifstream datoteka(ime, ios::out);
			if(datoteka.is_open()){
				while(getline(datoteka,linija)){
					cout << linija << endl;
				}
				system("pause");
				datoteka.close();
			}else{
				cout << "Datoteka sa tim imenom ne postoji.\n";
				system("pause");
			}
		}
		if(izbor==4){
			break;
		}
	}while(izbor>=1 && izbor<=4);
	
	cout << "Hvala i dovidjenja.";	
	cout << endl;
	system("pause");
	return 0;
}

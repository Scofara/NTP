#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

enum Vrsta{privatni=1, poslovni, super};

struct Datum{
    int dan,mjesec,godina;    
};

struct Racun{
    int idPotrosaca;
    string imePrezime;
    Datum danIzdavanja;
    float iznos;
    Vrsta vrsta;
    
    void unosRacuna(){
		ofstream datoteka("racuni.txt", ios::app);
		cout << "ID: ";
		cin >> this->idPotrosaca;
		datoteka << "ID: " << idPotrosaca << endl;
		cin.ignore();
		cout << "Potrosac: ";
		char *IP = new char[40];
		cin.getline(IP,40);
		imePrezime = IP;
		datoteka << "Potrosac: " << imePrezime << endl;
		cout << "Unesite dan mjesec i godinu: ";
		cin >> this->danIzdavanja.dan >> this->danIzdavanja.mjesec >> this->danIzdavanja.godina;
		datoteka << "Datum: " << this->danIzdavanja.dan << "." << this->danIzdavanja.mjesec << "." << this->danIzdavanja.godina << "." << endl;
		cout << "Iznos racuna: ";
		cin >> this->iznos;
		datoteka << "Iznos: " << this->iznos << endl;
		int x;
		cout << "Unesite vrstu potrosaca:\n\t1.Privatni\n\t2.Poslovni\n\t3.Super\nOdabir: ";
		cin >> x;
		this->vrsta = (Vrsta)x;
		datoteka << "Vrsta: ";
		if(x==1){
			datoteka << "Privatni" << endl;
		}else if(x==2){
			datoteka << "Poslovni" << endl;
		}else{
			datoteka << "Super" << endl;
		}
		datoteka.close();
	}
	void pregledRacuna(){
		string provjera;
		cout << left << setw(8) << "ID" << left << setw(20) << "Potrosac" << left << setw(15) 
		     << "Datum" << left << setw(10) << "Iznos" << left << setw(12) << "Vrsta"<< endl;
		ifstream ispis("racuni.txt");
		string tekst;
		while(!ispis.eof()){
			ispis >> provjera;
			if(provjera == "ID:"){
				ispis >> provjera;
				cout << left << setw(8) << provjera << "";
			}
			if(provjera == "Potrosac:"){
				tekst = "";
				cout << left << setw(20);
				do{
					ispis >> provjera;
					if(provjera != "Datum:"){
						tekst += provjera + " ";
					}
				}while(provjera != "Datum:");
				cout << tekst << "";
			}
			if(provjera == "Datum:"){
				ispis >> provjera;
				cout << left << setw(15) << provjera << "";
			}
			if(provjera == "Iznos:"){
				ispis >> provjera;
				cout << left << setw(10) << provjera << "";
			}
			if(provjera == "Vrsta:"){
				ispis >> provjera;
				cout << left << setw(12) << provjera << endl;
				cout << "";
			}
		}
		cout << endl;
		ispis.close();
	}
	void ispisUplatnice(){
		string provjera,tekst;
		cout << left << setw(8) << "ID" << left << setw(20) << "Potrosac" << endl;
		int idP[100];
		int x,b;
		string imenaP[100];
		int br=0;
		ifstream ispisP("racuni.txt");
		while(!ispisP.eof()){
			ispisP >> provjera;
			if(provjera == "ID:"){
				ispisP >> x;
				b = 0;
				for(int i=0;i<br;i++){
					if(x==idP[i]){
						b++;
					}
				}
				if(b==0){
					idP[br] = x;
					ispisP >> provjera;
					if(provjera == "Potrosac:"){
						string tekst = "";
						do{
							ispisP >> provjera;
							if(provjera != "Datum:"){
								tekst += provjera + " ";
							}
						}while(provjera != "Datum:");
						imenaP[br] = tekst;
					}
					br++;
				}
				
			}
		}
		for(int i=0;i<br;i++){
			cout << left << setw(8) << idP[i] << left << setw(20) << imenaP[i] << endl;
		}
		ispisP.close();	
		string sifra;
		cout << "\nOdaberite sifru potrosaca: ";
		cin >> sifra;
		
		float suma=0;
		float temp;
		ifstream racun("racuni.txt");
		while(!racun.eof()){
			racun >> provjera;
			if(provjera == "ID:"){
				racun >> provjera;		
				if(provjera == sifra){
					racun >> provjera;
					if(provjera == "Potrosac:"){
						tekst = "";
						do{
							racun >> provjera;
							if(provjera != "Datum:"){
								tekst += provjera + " ";
							}
						}while(provjera != "Datum:");
					}
					do{
						racun >> provjera;
					}while(provjera != "Iznos:");
						racun >> temp;
						suma += temp;
				}
			}
		}
		racun.close();
		string ime;
		
		ime = sifra + ".txt";
		ofstream uplatnica(ime.c_str());
			uplatnica << "-------------------------------------------------------------------\n";
			uplatnica << "\t\t\tMoj glas d.o.o.:\n";
			uplatnica << "-------------------------------------------------------------------\n";
			uplatnica << "ID: " << sifra << "\t" << "Potrosac: " << tekst << "\tIznos: " << suma << " KM." << endl;
			uplatnica << "\n";
			uplatnica << "\t\t\t\tPotpis: _______________________\n";
			uplatnica << "-------------------------------------------------------------------\n";
		uplatnica.close();
		cout << "Uplatnica uspjesno snimnjena u " << ime << endl;
	}
 
};

void prikaziMeni(){
	system("cls");
	cout << "----------------------------------------------\n";
	cout << "\t\tMeni:\n";
	cout << "----------------------------------------------\n";
	cout << "\t1. Unos racuna\n";
	cout << "\t2. Pregled racuna\n";
	cout << "\t3. Ispis uplatnice\n";
	cout << "\t4. Kraj\n";
	cout << "----------------------------------------------\n";
}

int main(){
	Racun r;
	int izbor;
	do{
		do{
			prikaziMeni();
			cout << "Izbor:";
			cin >> izbor;
			if(izbor==1){
				system("cls");
				cout << "----------------------------------------------\n";
				cout << "\tUnos racuna potrosaca:\n";
				cout << "----------------------------------------------\n";
				r.unosRacuna();
				cout << endl;
				system("pause");	
			}
			if(izbor==2){
				system("cls");
				cout << "-------------------------------------------------------------------\n";
				cout << "\t\tPregled racuna potrosaca:\n";
				cout << "-------------------------------------------------------------------\n";
				r.pregledRacuna();
				cout << endl;
				system("pause");
			} 
			if(izbor==3){
				system("cls");
				cout << "-------------------------------------------------------------------\n";
				cout << "\t\tIspis uplatnice potrosaca:\n";
				cout << "-------------------------------------------------------------------\n";
				r.ispisUplatnice();
				cout << endl;
				system("pause");
			}
			if(izbor==4){
				break;
			}
		}while(izbor!=4);
	}while(izbor<1 || izbor>4);
	
	
	
	
	cout << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <cstring>
using namespace std;
//pregledati zadatak.....
char crt[] = "\n--------------------------------------------------\n";

void OslobodiMemoriju(char * &tekst) {
   delete[] tekst;
   tekst = NULL;
   cout << crt << "Info: Memorija oslobodjena!" << crt;
}
void Informacije(char * tekst){
	int razmaci = 0, brojevi = 0, velika = 0, mala = 0, interpunkcijski = 0;
	for(int i=0;i<strlen(tekst);i++){
		if(isspace(tekst[i])){
			razmaci++;
		}else if(isdigit(tekst[i])){
			brojevi++;
		}else if(isupper(tekst[i])){
			velika++;
		}else if(islower(tekst[i])){
			mala++;
		}else if(ispunct(tekst[i])){
			interpunkcijski++;
		}
	}
	cout << crt << "\t\t::INFO::" << crt;
	cout << crt << "Tekst: " << tekst << crt;
	cout << "Niz ima " << strlen(tekst) << " karaktera." << crt;
	cout << "Razmaka: \t\t\t" << razmaci << endl;
	cout << "Brojeva: \t\t\t" << brojevi << endl;
	cout << "Velikih slova: \t\t\t" << velika << endl;
	cout << "Malih slova: \t\t\t" << mala << endl;
	cout << "Interpunkcijskih znakova: \t" << interpunkcijski;
	cout << crt << "Info: Informacije prikazane...." << crt;
}
 
void DodajTekst(char * &tekst) {
	cin.ignore();
	const int max = 300;
	char temp[max];
	cout << crt << "\t\t::DODAJ::" << crt;
	cout << tekst << " ";
	cin.getline(temp,max);
	char* noviTekst = new char[strlen(tekst)+strlen(temp)+2];
	strcpy(noviTekst,tekst);
	strcat(noviTekst," ");
	strcat(noviTekst,temp);
	OslobodiMemoriju(tekst);
	tekst = noviTekst;
	cout << crt << "Info: Novi tekst dodat..." << crt;
}

void Pretraga(char * tekst) {
	const int max = 20;
	char temp[max];
	char nastavak;
	cout << crt << "\t\t::PRETRAGA" << crt << "Unesite tekst koji trazite:";
	cin.getline(temp,max);
	char* pok = strstr(tekst,temp);
	if(pok == NULL){
		cout << "Tekst \'" << temp << "\' nije pronadjen!" << crt;
	}else{
		cout << "Tekst \'" << temp << "\' je pronadjen!" << endl;
		cout << "Da li zelite prikazati sadrzaj koji se nalazi nakon pronadjenog teksta (D/N):";
		cin >> nastavak;
		if(toupper(nastavak)== 'D'){
			cout << crt << "Tekst: " << crt << pok << crt;
		}
	}
}

void UnosTeksta(char *& tekst) {
	const int max = 300;
    char temp[max];
    cout << "Unesite vas tekst (#-kraj): ";
    cin.getline(temp,max,'#');
    cin.ignore();
	if(tekst != NULL){
		OslobodiMemoriju(tekst);
	}
	strcpy(tekst,temp);
}

int PrikaziMeni() {
	int izbor = 1;
		cout << crt << "\t\t::MENI::" << crt;
		cout << "1. Unos novog teksta" << endl;
		cout << "2. Dodavanje teksta" << endl;
		cout << "3. Informacije o tekstu" << endl;
		cout << "4. Pretraga" << endl;
		cout << "5. Zatvori editor" << endl;
		cout << "Unesite vas izbor: ";
		cin >> izbor;
		system("cls");
	
	return izbor;
}

int main(){
	int izbor;
	char* tekst = "Neki tekst!";
	do {
		cout << crt << "\t\t::TEKST EDITOR::";
		izbor = PrikaziMeni();  	 
		switch (izbor) {
		case 1:
			UnosTeksta(tekst); 
			break;
		case 2:
			DodajTekst(tekst); 
			break;
		case 3:
			Informacije(tekst); 
			break;
		case 4:
			Pretraga(tekst); 
			break;
		} 	 	
		system("cls");
	}while (izbor < 5);  	
	
	if (tekst != NULL)
		OslobodiMemoriju(tekst);
	
	cout << crt;
	cout << endl;
	return 0;
}


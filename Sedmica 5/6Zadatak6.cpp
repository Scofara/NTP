#include <iostream>
#include <ctime>
#include "windows.h" 
using namespace std;

typedef void (FunkTip)();

void zadatak1(){
	//pauziranje na 1 sek 
	Sleep(1000);
	cout << "radni zadatak 1 zavrsen" << endl;
}
void zadatak2(){
	//pauziranje na 1 sek 
	Sleep(1000);
	cout << "radni zadatak 2 zavrsen" << endl;
}
void zadatak3(){
	//pauziranje na 1 sek 
	Sleep(1000);
	cout << "radni zadatak 3 zavrsen" << endl;
}
void zadatak4(){
	//pauziranje na 1 sek 
	Sleep(1000);
	cout << "radni zadatak 4 zavrsen" << endl;
}

void zadatak5(){
	Sleep(1000);
	cout << "pogresno odabrani zadatak!" << endl;
}

FunkTip* odaberi_zadatak(){
	cout << "Odaberite zadatak 1 - 4: " << endl;
	int r;
	cin >> r;
	if (r == 1)
		return zadatak1;
	if (r == 2)
		return zadatak2;
	if (r == 3)
		return zadatak3;
	if (r == 4)
		return zadatak4;
	
	return zadatak5;
}


struct TodoRaspored
{
	int brojacZadatakaNiz = 0;
	FunkTip* zadaci[10];
};


void dodaj_zadatak(TodoRaspored* todo, FunkTip* newZadatak){
      todo->zadaci[todo->brojacZadatakaNiz] = newZadatak;
      todo->brojacZadatakaNiz++;
}

void ukloni_zadatak(TodoRaspored* todo){
      int rb;
      cout << "Unesite redni broj zadatka za obrisati:";
      cin >> rb;
      todo->brojacZadatakaNiz--;
      todo->zadaci[rb] = todo->zadaci[todo->brojacZadatakaNiz];
}

void izvrsi_zadatke(TodoRaspored* todo){
       for(int i=0;i<todo->brojacZadatakaNiz;i++){
       		FunkTip* p = todo->zadaci[i];
       		p();
	   }

}

int main(){
	TodoRaspored* danas = new TodoRaspored;
	cout << "TodoRaspored danas" << endl;
	dodaj_zadatak(danas, odaberi_zadatak());
	dodaj_zadatak(danas, odaberi_zadatak());
	FunkTip* pZ3 = odaberi_zadatak();
	dodaj_zadatak(danas, pZ3);

	TodoRaspored* sutra = new TodoRaspored;
	cout << "TodoRaspored sutra" << endl;
	dodaj_zadatak(sutra, odaberi_zadatak());
	dodaj_zadatak(sutra, odaberi_zadatak());
	dodaj_zadatak(sutra, odaberi_zadatak());

	izvrsi_zadatke(danas);
	system("pause");
	izvrsi_zadatke(sutra);
	system("pause");
	return 0;
}


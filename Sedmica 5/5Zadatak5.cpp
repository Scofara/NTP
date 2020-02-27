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
	dodaj_zadatak(danas, zadatak1);
	dodaj_zadatak(danas, zadatak2);
	FunkTip* pZ3 = zadatak3;
	dodaj_zadatak(danas, pZ3);

	TodoRaspored* sutra = new TodoRaspored;
	cout << "TodoRaspored sutra" << endl;
	dodaj_zadatak(sutra, zadatak2);
	dodaj_zadatak(sutra, zadatak3);
	dodaj_zadatak(sutra, zadatak4);

	izvrsi_zadatke(danas);
	system("pause");
	izvrsi_zadatke(sutra);
	system("pause");
	return 0;
}


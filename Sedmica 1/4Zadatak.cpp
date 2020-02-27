#include <iostream>
using namespace std;
	/*
		Potrebno je napraviti funkciju
		ukloni_stotine(int broj) koja ukljanja,
		ako postoje, stoticu iz zapisa pozitivnog cijelog
		broja. Program radi sve dok se ne unese broj 0;
		Ulaz: 1210
		Izlaz: 110
		Ulaz: 18
		Izlaz: 18
		Ulaz: 1412412
		Izlaz: 141212
	*/
void ukloni_stotine(int x){
	if(x<100){
		cout << "Izlaz: " << x << endl;
	}else{
		//4123
		int a;
		a = x%100; //posljednje dvije cifre
		x /= 1000; //uklanjanje posljednje 3 cifre
		x = x*100+a;
		cout << "Izlaz: " << x << endl;
	}
}
int main(){
	setlocale(LC_ALL,"");
	int broj;
	do{
		cout << "Ulaz: ";
		cin >> broj;
		if(broj!=0){
			ukloni_stotine(broj);
		}
	}while(broj!=0);
	
	return 0;
}


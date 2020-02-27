#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int broj,b1,b2,suma;
	do{
		cout << "Unesite sesterocifreni broj: ";
		cin >> broj;
		if(broj<100000 || broj>999999){
			cout << "Uneseni broj nije sesterocifreni!\n";
		}
	}while(broj<100000 || broj>999999);
	b2 = broj%1000;
	b1 = broj/1000;
	suma = b1+b2;
	cout << "Broj " << broj << " rastavljen na dva dijela: "
	     << b1 << " i " << b2 << ".\n";
	cout << "Suma ova dva dijela iznosi: " << suma << ".\n";
	if(suma<1000){
		if(suma/100==suma%10){
			cout << "Broj " << suma << " je PALINDROM.\n";
		}else{
			cout << "Broj " << suma << " nije PALINDROM.\n";
		}
	}else{
		int sumica = 0;
		for(int i=1;i<=suma;i++){
			if(i%77==0){
				cout << i << " ";
				sumica += i;
			}
		}
		cout << "\nSuma ovih brojeva je " << sumica << "."; 
	} 
	return 0;
}


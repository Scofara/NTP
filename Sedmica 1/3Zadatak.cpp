#include <iostream>
using namespace std;
	/*
		Napraviti funkciju koja racuna sumu
		znamenki unesenog cetverocifrenog broja
		(uneseni broj mora biti cetverocifren)
	*/
int sumaZ(int n){
	int a,b,c,d;
	a = n/1000;
	b = (n-a*1000)/100;
	c = (n-a*1000-b*100)/10;
	d = n%10;
	return a+b+c+d;
}
int main(){
	setlocale(LC_ALL,"");
	int broj;
	do{
		cout << "Unesite broj: ";
		cin >> broj;
		if(broj<1000 || broj>9999){
			cout << "[GRESKA] Uneseni broj nije cetverocifren!\n";
		}
		
	}while(broj<1000 || broj>9999);
	cout << "Suma znamenki broja " << broj << " iznosi: " << sumaZ(broj);
	return 0;
}


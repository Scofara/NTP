#include <iostream>
using namespace std;
	/*
		Rekurzivne funkcije - funkcije koje pozivaju same sebe
		
		if(uslov){
			return 1;
		}else{
			obrada
			ponovni poziv funkcije
		}	
	*/
	/*
		Funkcija za izraèunavanje sume prvih n prirodnih brojeva
	*/

int zbroj(int n){
	if(n==1){
		return 1; //uslov zavrsetka - osnovni slucaj
	}else{
		return zbroj(n-1)+n; //korak - rekurzija
	}
}
	//n+(n-1)+(n-2)+...+2+1

int main(){
	int a;
	cout << "Unesite broj za provjeru: ";
	cin >> a;
	cout << "Suma prirodnih brojeva do " << a << " iznosi: " << zbroj(a);
	
	
	
	
	cout << endl;
	system("pause");
	return 0;
}

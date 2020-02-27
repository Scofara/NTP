#include <iostream>
using namespace std;
	/*
		Funkcija za izraèunavanje faktorijela
		5! = 1*2*3*4*5 = 120
	*/

int faktorijel(int n){
	if(n==1){
		return 1;
	}else{
		return faktorijel(n-1)*n;
	}
}

int main(){
	int a;
	cout << "Unesite broj za provjeru: ";
	cin >> a;
	cout << a << "! = " << faktorijel(a);
	
	cout << endl;
	system("pause");
	return 0;
}

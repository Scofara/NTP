#include <iostream>
using namespace std;
	/*
		Napraviti funkciju Fibonaci(int n),
		Fibonacijevi brojevi su: 1, 1, 2, 3 ,5 , 8, 13, 21, 34, ...
		F0 = F1 = 1
		Fn = Fn-2 + Fn-1
	*/
int Fibonaci(int n){
	if(n<2){
		return 1;
	}else{
		return Fibonaci(n-2)+Fibonaci(n-1);
	}
}


int main(){
	int a;
	cout << "Unesite broj za provjeru: ";
	cin >> a;
	cout << "Broj zeceva u " << a << ". mjesecu, iznosi: " << Fibonaci(a);
	cout << endl;
	cout << Fibonaci(0);
	for(int i=1;i<=a;i++){
		cout << ", " << Fibonaci(i);
	}
	cout << ".";
	
	cout << endl;
	system("pause");
	return 0;
}

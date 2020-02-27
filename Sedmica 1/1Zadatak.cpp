#include <iostream>
using namespace std;
	/*
		1. Zadatak
		Napraviti funkciju za množenje dva 
		broja
	*/
double mnozenje(double a,double b){
	return a*b;
}
int main(){
	setlocale(LC_ALL,"");
	double x,y;
	cout << "Unesite dva broja: ";
	cin >> x >> y;
	cout << "Proizvod brojeva " << x << " i "
	     << y << " iznosi " << mnozenje(x,y);
	return 0;
}


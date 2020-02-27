#include <iostream>
#include <cstring>
using namespace std;

char* dodjeli_str(char* s){
	char* x = new char[strlen(s)+1];
	strcpy(x,s);
	return x;
}

void dodaj_str(char* &a, char* b){
	int d1 = strlen(a);
	int d2 = strlen(b);
	
	char* x = new char[d1+d2+1];
	strcpy(x,a);
	strcat(x,b);
	delete[] a;
	a = x;
}

int main(){
	char* str1 = dodjeli_str("Prvi niz. ");
	dodaj_str(str1, "Ovo je drugi niz");

	cout << str1 << endl; //ispis: "Prvi niz. Ovo je drugi niz."
	delete [] str1;

	cout << endl;
	system("pause");
	return 0;
}

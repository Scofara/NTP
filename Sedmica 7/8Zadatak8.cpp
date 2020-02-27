#include <iostream>
#include <cstring>
using namespace std;

//a)
char* dodjeli_str(char* s){
	char* x = new char[strlen(s)+1];
	strcpy(x,s);
	return x;
}


int main(){

	char* str1 = dodjeli_str("Ovo je neki string");
     //funkcija vrši alokaciju i kopiranje

	cout << str1 << endl;

	delete [] str1; //dealokacija
	cout << endl;
	system("pause");
	return 0;
}

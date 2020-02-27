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
	char* str1;
	str1 = dodjeli_str("Ovo je neki string");
	cout << str1 << endl;
	
	char* str2;
	str2 = dodjeli_str(str1);
	cout << str2 << endl;

	delete [] str1;
	delete [] str2;

	cout << endl;
	system("pause");
	return 0;
}

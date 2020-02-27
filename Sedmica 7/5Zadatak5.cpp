#include <iostream>
#include <cstring>
#include "string.h"

using namespace std;

int main(){
	char* str1 = "ovo je prvi string u statickoj memoriji";
	//a)
	cout << (str1+3) << endl;
	//b)
	cout << str1[0] << endl; //ili
	cout << *str1 << endl;
	//c)
	int d = strlen(str1);
	cout << str1[d-1] << endl; //ili
	cout << *(str1+d-1) << endl;
	//d)
	cout << (str1+d-10) << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

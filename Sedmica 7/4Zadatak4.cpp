#include <iostream>
#include <cstring>
#include "string.h"

using namespace std;

int main(){
	char* str1 = "ovo je prvi string u statickoj memoriji";
	char str2[] = "ovo je drugi string u statickoj memoriji";
	
	char* p1;
	char* p2;
	p1 = str1;  //p1 pokazuje na string str1
	p2 = str2;  //p2 pokazuje na string str2

	cout << str1 << endl;
	cout << str2 << endl;
	cout << p1 << endl;
	cout << p2 << endl;

	cout << endl;
	system("pause");
	return 0;
}

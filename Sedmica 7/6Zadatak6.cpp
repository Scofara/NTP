#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//a)
	char* str1 = "Prvi string.";
	char* str2 = "Drugi string.";
	int d1 = strlen(str1);
	int d2 = strlen(str2);
	
	char* str3 = new char[d1+d2+1];
	
	strcpy(str3,str1);
	strcat(str3,str2);
	
	cout << str3 << endl;
	
	delete[] str3;
	
	cout << endl;
	system("pause");
	return 0;
}

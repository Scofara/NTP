#include <iostream>
#include <cstring>
using namespace std;
//a)
char* spoji_str(char* a, char* b){
	int d1 = strlen(a);
	int d2 = strlen(b);
	
	char* x = new char[d1+d2+1];
	strcpy(x,a);
	strcat(x,b);
	return x;
}
//b)
char* spoji_str(char* a, char* b,char* c){
	int d1 = strlen(a);
	int d2 = strlen(b);
	int d3 = strlen(c);
	
	char* x = new char[d1+d2+d3,1];
	strcpy(x,a);
	strcat(x,b);
	strcat(x,c);
	return x;
}

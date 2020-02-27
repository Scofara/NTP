#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char* s = new char[7];
	cin >> s;
	char d[13];
	strcpy(d, s);
	cout << strlen(s) << endl;
	cout << strlen(d) << endl;

	
	cout << endl;
	return 0;
}

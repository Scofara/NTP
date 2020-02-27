#include <iostream>
#include <cmath>
using namespace std;
	
void saberi(int *x, int *y, int *z){
	*z = *x+*y;
}
void saberi(int &x,int &y,int &z){
	z = x+y;
}

int main(){
	int a,b,c;
	cout << "Unesite dva broja: ";
	cin >> a >> b;
	saberi(&a,&b,&c);
	cout << "c iznosi: " << c << endl;
	saberi(a,b,c);
	cout << "c iznosi: " << c << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
	
void saberi(int *x, int *y, int *z){
	*z = *x+*y;
}

int main(){
	int a,b,c;
	cout << "Unesite dva broja: ";
	cin >> a >> b;
	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;
	saberi(p1,p2,p3);
	cout << "c = " << c << endl;
	
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
	

int main(){
	float a,b;
	cout << "Unesite dva broja:";
	cin >> a >> b;
	float *p1 = &a;
	float *p2 = &b;
	float c1,c2,c3,c4,c5,c6;
	c1 = *p1-*p2;
	c2 = sin(*p1)-cos(*p2);
	c3 = *p2*(*p1);
	if(*p2 != 0){
		c4 = *p1/(*p2);
	}
	c5 = pow(*p1,*p2);
	c6 = pow(sqrt(*p1),*p2);
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "c3 = " << c3 << endl;
	cout << "c4 = " << c4 << endl;
	cout << "c5 = " << c5 << endl;
	cout << "c6 = " << c6 << endl;
	cout << endl;
	system("pause");
	return 0;
}

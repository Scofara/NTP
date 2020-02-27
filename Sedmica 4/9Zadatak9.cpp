#include <iostream>

using namespace std;


int main(){
	//a)
	double niz[10] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	//b)
	cout << "Zauzima prostora: " << 10*sizeof(double) << endl;
	//c)
	double *p;
	//d)
	p = &(niz[0]);
	p = niz;
	//e)
	double a = niz[3];
	double b = *(niz+3);
	double c = p[3];
	double d = *(p+3);
	cout << a << " " << b << " " << c << " " << d << endl;
	//f)
	for(int i=0;i<10;i++){
		cout << "Adresa od niz[" << i << "]: " << niz+i << endl;
	}
	cout << "Drugi nacin preko pokazivaca: \n";
	for(int i=0;i<10;i++){
		cout << "Adresa od p[" << i << "]: " << p+i << endl;
	}
	cout << "Treci nacin preko inkrementa pokazivaca: \n";
	for(int i=0;i<10;i++){
		cout << "Adresa od p[" << i << "]: " << p++ << endl;
	}
	//g)
	p = niz;
	for(int i=0;i<10;i++){
		cout << "Adresa od niz[" << i << "]: " << *(p++) << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

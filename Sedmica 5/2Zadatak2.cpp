#include <iostream>
#include <cmath>
using namespace std;

void f1(float a,float b, float c,float &r1,float &r2,bool &greska){
	float D;
	D = b*b-4*a*c;
	if(D<0 || a==0){
		greska = true;
	}else{
		r1 = (-b+sqrt(D))/(2*a);
		r2 = (-b-sqrt(D))/(2*a);
		greska = false;
	}
}

int main(){
	float a,b,c,x1,x2;
	bool error;
	void(*pf1)(float,float,float,float&,float&,bool&) = f1;
	
	cout << "Unesite a,b,c: \n";
	cin >> a >> b >> c;
	
	pf1(a,b,c,x1,x2,error);
	
	if(error){
		cout << "[GRESKA] Kvadratna jednacina nema rjesenja\n";
	}else{
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}	
	
	cout << endl;
	system("pause");
	return 0;
}

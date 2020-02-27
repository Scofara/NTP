#include <iostream>
#include <cmath>
using namespace std;
	
void zamijeni(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void zamijeni(int &p1,int &p2){
	int t = p1;
	p1 = p2;
	p2 = t;
}

int main(){
	int a,b;
	cout << "Unesite dva broja: ";
	cin >> a >> b;
	zamijeni(&a,&b);
	cout << "Zamijenjeni brojevi su: " << a << " i " << b << endl;
	zamijeni(a,b);
	cout << "Zamijenjeni brojevi su: " << a << " i " << b << endl;
	cout << endl;
	system("pause");
	return 0;
}

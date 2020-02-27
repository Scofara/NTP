#include <iostream>
#include <cmath>
using namespace std;
	
void f1(int *p){
	cout << *p << endl;
}

int main(){
	int a;
	cout << "Unesite broj: ";
	cin >> a;
	
	f1(&a);
	
	cout << endl;
	system("pause");
	return 0;
}

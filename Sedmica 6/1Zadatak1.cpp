#include <iostream>
using namespace std;

int main(){
	int A[] = {201,202,203,204,205};
	cout << "Prvi nacin: \n";
	for(int i=0;i<5;i++){
		cout << &A[i] << endl;
	}
	cout << "Drugi nacin:\n";
	for(int i=0;i<5;i++){
		cout << A+i << endl;
	}
	cout << "Treci nacin:\n";
	int *p;
	for(int i=0;i<5;i++){
		p = A+i;
		cout << p << endl;
	}
	cout << "Vrijednosti clanova:\n";
	int *p1,*p2,*p3,*p4,*p5;
	p1 = A;
	p2 = A+1;
	p3 = A+2;
	p4 = A+3;
	p5 = A+4;
	cout << *p1 << endl;
	cout << *p2 << endl;
	cout << *p3 << endl;
	cout << *p4 << endl;
	cout << *p5 << endl;
	cout << endl;
	system("pause");
	return 0;
}

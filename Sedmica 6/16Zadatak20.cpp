#include <iostream>
using namespace std;

int main(){
	//a)
	int N[15];
	//b) 
	int *p1, *p2;
	//c)
	p1 = new int[19];
	//d)
	p2 = new int[12];
	//e)
	int *temp;
	temp = p1;
	p1 = p2;
	p2 = temp;
	//f)
	delete[] p1;
	p1 = NULL;
	//g)
	p1 = &p2[5];
	//h)
	*p1 = 124;
	//i)
	*(p2+5)=125;
	//j)
	*(p2+2)=126;
	//k)
	*(p1-3)=127;
	//l)
	cout << p1[0] << endl;
	//m)
	cout << p2[5] << endl;
	//n)
	cout << p2[2] << endl;
	//o)
	cout << p1[-3] << endl;
	//p)
	delete[] p2;
	//q)
	p1 = &N[0]; //p1=N
	//r)
	*(p1+2) = 128;
	//s)
	*(N+2) = 129;
	//t)
	cout << p1[2] << endl;
	//u)
	cout << N[2] << endl;
	cout << endl;
	system("pause");
	return 0;
}

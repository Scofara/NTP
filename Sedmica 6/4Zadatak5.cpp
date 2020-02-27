#include <iostream>
using namespace std;


int main(){
	int B[5] = {4,6,7,105,987};
	int* p1;
	p1 = B+2;
	cout << *(p1+0) << endl;
	cout << *(p1+2);
	cout << endl;
	system("pause");
	return 0;
}

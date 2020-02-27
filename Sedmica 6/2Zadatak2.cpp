#include <iostream>
using namespace std;

int main(){
	int A[] = {201,202,203,204,205};

	cout << "Ispis adresa:\n";
	for(int i=0;i<5;i++){
		cout << A+i << endl;
	}
	cout << "Razlika adresa elementa 4 i elementa 1: "
		 << &A[4] - &A[1];
	
	cout << endl;
	system("pause");
	return 0;
}

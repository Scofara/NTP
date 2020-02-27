#include <iostream>
using namespace std;


int main(){
	int A[99];
	for(int i = 0;i<99;i++){
		A[i] = 301+i;
	}
	
	int* B[33];
	for(int i = 0;i<33;i++){
		B[i] = &(A[3*i]);
	}
	//a ispis
	for(int i = 0;i<33;i++){
		cout << *(B[i]) << endl;
	}
	
	//b ispis
	for(int i = 0;i<33;i++){
		cout << **(B+i) << endl;
	}
	
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;


int main(){
	int a=2,b=5,c=7;
	
	int* B[100] = {&a,&b,&c};
	
	cout << "Prvi nacin:\n";
	cout << "Prvi clan: " << *(B[0]) << endl;	
	cout << "Drugi clan: " << *(B[1]) << endl;
	cout << "Treci clan: " << *(B[2]) << endl;
	cout << "Drugi nacin:\n";
	cout << "Prvi clan: " << **(B+0) << endl;
	cout << "Drugi clan: " << **(B+1) << endl;
	cout << "Treci clan: " << **(B+2) << endl;
	cout << endl;
	system("pause");
	return 0;
}

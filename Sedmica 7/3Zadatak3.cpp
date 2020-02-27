#include <iostream>
#include <cstring>


using namespace std;

int main(){
	char* A = new char[30];
	cout << "Unesi ime i prezime:";
	cin.getline(A,29);
	
	char B[20];
	cout << "Unesite mjesto rodjenja:";
	cin.getline(B,19);
	
	int brKaraktera = strlen(A)+strlen(B)+2;   //2 - +1 za A i +1 za B
	char* C = new char[brKaraktera];
	
	strcpy(C,A); //A kopira u C
	strcat(C,"-"); //u C se dodaje jedan karakter
	strcat(C,B); //B dodaje u C
	
	cout << C << endl;
	
	delete[] A;
	delete[] C;
	
	cout << endl;
	system("pause");
	return 0;
}


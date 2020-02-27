#include <iostream>
using namespace std;
	/*
		Euklidov algoritam za pronalaženje NZD dva prirodna broja
		1. Ako je a<b zamijeni a i b
		2. r = a % b
		3. a = b i b = r
		4. Ako je r razlièit od 0 idi na 2
		5. Vrati a
	*/
int NZD(int a,int b){
	if(b==0){
		return a;
	}else{
		return NZD(b,a%b);
	}
}

int main(){
	int x,y;
	cout << "Unijeti dva prirodna broja za odredjivanje NZD: ";
	cin >> x >> y;
	cout << "NZD(" << x << "," << y << ") = " << NZD(x,y);
	
	cout << endl;
	system("pause");
	return 0;
}

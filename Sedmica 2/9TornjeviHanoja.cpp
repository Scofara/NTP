#include <iostream>
using namespace std;
	/*
		Rekurzivni algoritam za igru Tornjevi Hanoja
	*/
	int br=0;
void toranj(int a,char from, char aux, char to){
	if(a==1){
		br++;
		cout << br << ". Pomjeri disk 1 sa " << from << " na " << to << endl;
		return;
	}else{
		toranj(a-1,from,to,aux);
		br++;
		cout << br << ". Pomjeri disk " << a << " sa " << from << " na " << to << endl;
		toranj(a-1,aux,from,to);
	}
}


int main(){
	int n;
	cout << "Unesite broj diskova: ";
	cin >> n;
	cout << "Algoritam za rjesenje Tornjeva Hanoja sa " << n << " diskova:";
	cout << endl;
	toranj(n,'A','B','C');
	
	
	
	
	cout << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;
	/*
		Suma kubova parnih brojeva od m do n
		- silaznom rekurzijom
		- uzlaznom rekurzijom
		- dekompozicijom
	*/
//Uzlazna rekurzija
int kuboviU(int i, int j){
	if(i>j){
		return 0;
	}else{
		if(i%2==1){
			i++;
		}
		return i*i*i+kuboviU(i+2,j);
	}
}
//Silazna rekurzija
int kuboviS(int i,int j){
	if(i>j){
		return 0;
	}else{
		if(j%2==1){
			j--;
		}
		return j*j*j+kuboviS(i,j-2);
	}
}
//Dekompozicija
int kuboviD(int i,int j){
	if(i==j){
		if(i%2==0){
			return j*j*j;
		}else{
			return 0;
		}
	}else{
		int sr = (i+j)/2;
		return kuboviD(i,sr) + kuboviD(sr+1,j);
	}
}


int main(){
	int m,n;
	cout << "Unesite dva broja: ";
	cin >> m >> n;
	int poc,kraj;
	if(m<n){
		poc = m;
		kraj = n;
	}else{
		poc = n;
		kraj = m;
	}
	cout << "Uzlazna rekurzija:\n";
	cout << "Suma kubova brojeva od " << poc << " do " << kraj << " iznosi: ";
	cout << kuboviU(poc,kraj);
 	cout << "\nSilazna rekurzija:\n";
	cout << "Suma kubova brojeva od " << poc << " do " << kraj << " iznosi: ";
	cout << kuboviS(poc,kraj);
	cout << "\nDekompozicija:\n";
	cout << "Suma kubova brojeva od " << poc << " do " << kraj << " iznosi: ";
	cout << kuboviD(poc,kraj);
	cout << endl;
	system("pause");
	return 0;
}

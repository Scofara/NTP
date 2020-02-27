#include <iostream>
using namespace std;

//a)
void unos(int *N, int v){
	for(int i=0;i<v;i++){
		cin >> N[i];
	}		
}

//b)
void ispis(int *N, int v){
	for(int i=0;i<v;i++){
		cout << N[i] << " ";
	}		
}

//c)
int* najveci(int *N, int v){
	int* max = N;
	for(int i=1;i<v;i++){
		if(N[i]> *max){
			max = N+i;
		}
	}
	return max;
}

//d)
float* arit_sred(int *N,int v){
	int suma = 0;
	for(int i=0;i<v;i++){
		suma += N[i];
	}
	float *rez = new float;
	*rez = float(suma)/v;
	return rez;
}

int main(){
	int N[] = {5,1,9,15,10};
	unos(N,5);
	ispis(N,5);
	int *p = najveci(N,5);
	cout << endl;
	cout << "Najveci element: " << *p << endl;
	
	float *as = arit_sred(N,5);
	cout << "Aritmeticka sredina: " << *as << endl;
	
	
	cout << endl;
	system("pause");
	return 0;
}

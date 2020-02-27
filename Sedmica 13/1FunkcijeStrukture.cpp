#include <iostream>
using namespace std;

struct Datum{
	int dan,mjesec,godina;
	
	void dodajDatum(int a,int b,int c){
		dan = a;
		mjesec = b;
		godina = c;
	}
	
	void ispisDatuma(){
		cout << dan << "." << mjesec << "." << godina << "." << endl;
	}
	
	Datum(){
		dan = 1;
		mjesec = 1;
		godina = 2000;
	}
	
	Datum(int a,int b, int c){
		dan = a;
		mjesec = b;
		godina = c;
	}
	
	bool provjeraDatum(Datum d){
		return (dan==d.dan && mjesec==d.mjesec && godina==d.godina);
	}
};

int main(){
	
	Datum danas,sutra,prekosutra(25,5,2019);
	danas.dodajDatum(23,5,2019);
	danas.ispisDatuma();
	sutra.ispisDatuma();
	prekosutra.ispisDatuma();
	if(danas.provjeraDatum(prekosutra)){
		cout << "Datumi su isti.";
	}else{
		cout << "Datumi nisu isti.";
	}
	cout << endl;
	system("pause");
	return 0;
}

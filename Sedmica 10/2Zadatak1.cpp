#include <iostream>
using namespace std;
    /*
        1. Napraviti lambda funkciju koja vraæa veæi od dva
        proslijeğena broja. Vrijednost veæeg snima u novu varijablu.
        - Iskoristiti funkciju da se uporede tri broja i ispise najveci

        2. Napraviti lambda funkciju u kojoj mijenjamo vrijednost varijable
        z (Korisnik ponovo unosi vrijednost za z) i novu vrijednost
        mnozimo sa vecim brojem od x,y. Vrijednost proizvoda snimiti u
        varijablu p;

        3. Napraviti lambda funkciju koja kupi sve varijable u programu
        po vrijednosti i ako je njihova suma veca od 30 vraca true, u
        vraca false. Vrijednost snimiti u varijablu tacnost (bool);


    */

int main(){
    //1.
    auto veci = [](double a,double b){
        if(a>b){
            return a;
        }else{
            return b;
        }
    };

    int x,y,z;
    cout << "Unesite tri broja: ";
    cin >> x >> y >> z;

    cout << "Najveci broj je: " << veci(veci(x,y),z) << endl;
    //2.
    auto proizvod = [&z](double a){
        cout << "Unesite novu vrijednost za z: ";
        cin >> z;
        return z*a;
    };

    double p = proizvod(veci(x,y));
    cout << z << "*" << veci(x,y) << " = " << p;

    //3.
    auto suma = [=](){
        if(x+y+z+p>30){
            return true;
        }else{
            return false;
        }
    };
    bool tacnost = suma();
    cout << "\nSuma koristenih brojeva veca od 30?" << endl;
    if(suma()){
        cout << "DA";
    }else{
        cout << "NE";
    }

    cout << endl;
    return 0;
}


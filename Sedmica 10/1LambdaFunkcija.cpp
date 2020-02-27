#include <iostream>

using namespace std;

    /*
        auto imeFunkcije = [capture klauzule](ulazni parametri) -> int{
            tijelo funkcije
        };

    */
int main(){

    auto saberi = [](int a,int b){
        return a+b;
    };

    cout << saberi(3,4);
    int x;
    double y;
    double z = 4.3;
    x = saberi(5,7);
    y = saberi(4,2);
    cout << endl;
    cout << x << " " << y << endl;

    auto pomnozi = [x,y](double c){ //proslijedjena je samo vrijednost
        return x*y*c;
    };
    cout << pomnozi(3) << endl;

    auto podijeli = [&x,y](){ //x pokupljeno po referenci, y po vrijednosti
        x = 26;
        return x/y;
    };
    cout << podijeli() << endl;
    cout << x << endl;

    auto oduzmi = [=](){ //pokupi sve vrijednosti varijabli
        return z-x;
    };
    cout << oduzmi() << endl;

    auto ispis = [&](){ //kupi sve varijable po referenci
        z = 11.22;
        return z;
    };
    cout << ispis() << endl;

    cout << endl;
    return 0;
}

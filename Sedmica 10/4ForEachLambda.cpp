#include <iostream>
#include <algorithm>
using namespace std;
    /*
        Izra�unati sumu niza brojeva koriste�i lambda funkciju i
        for_each funkciju
    */

int main(){
    int niz[] = {4,6,9,-5,12,18};
    int suma = 0;

    for_each(begin(niz), end(niz), [&](int x){ suma += x; });
    cout << "Suma niza brojeva iznosi: " << suma;

    cout << endl;
    return 0;
}



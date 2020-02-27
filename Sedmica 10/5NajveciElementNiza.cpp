#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <ctime>
#include <vector>
using namespace std;
    /*
        Racunar zamisli broj izmedju 10 i 20.
        Zatim zamisli toliko brojeva iz intervala 30 - 80
        Napraviti lambda fukciju (uz pomoc for_each) koja odredjuje najveci element niza
    */

int main(){
    srand(time(NULL));
    int brClanova;
    brClanova = rand()%11+10;
    int niz[brClanova];
    // unos elemenata
    for(int i=0;i<brClanova;i++){
        niz[i] = rand()%51+30;
    }
    // ispis elemenata
    for_each(niz, niz+brClanova, [](int x){ cout << x << endl;});
    // pronalazak najveceg
    int maks = *niz;
    for_each(niz, niz+brClanova, [&](int x){
             if(maks<x){
                maks = x;
             }
             });
    cout << "\nNajveci clan je: " << maks;



    cout << endl;
    return 0;
}



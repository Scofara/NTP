#include <iostream>
using namespace std;
    /*
        deklarisati tri varijable, i napraviti lambda funkciju koja
        ce ako je proslijedjeni broj paran uvecati ga za jedan.
        Iskoristi funkciju na sve tri unesena broja.


    */

int main(){
    int a,b,c;
    cout << "Unesite tri broja:";
    cin >> a >> b >> c;
    auto paran = [](int x){
        if(x%2==0){
            x++;
        }
        return x;
    };


    ,
    cout << a << " -> " << paran(a) << endl;
    cout << b << " -> " << paran(b) << endl;
    cout << c << " -> " << paran(c) << endl;

    cout << endl;
    return 0;
}



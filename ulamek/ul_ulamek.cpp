#include <iostream>
#include "ul_ulamek.h"

using namespace std;

Ulamek::Ulamek (int l, int m){
    licznik=l;
    if (m != 0) mianownik = m;
    else {
        cout <<"Mianownik nie może być zerem!" <<endl;
        exit(1);
    }
}

void Ulamek::zapisz(int l, int m) {
    licznik=l;
    if (m != 0) mianownik = m;
    else {
        cout <<"Mianownik nie może być zerem!" <<endl;
        exit(1);
    }
}

void Ulamek::wypisz() {
    cout << licznik << "/" << mianownik;
}
int Ulamek::getl(){
    return licznik;
}
int Ulamek::getm(){
    return mianownik;
}
void Ulamek::skracaj(){
    cout << licznik << "/" << mianownik << " = ";
        int a=licznik;
        int b=mianownik;
        while (a != b){
            if (a < b)
                b -= a;
            else
                a -= b;
        }
        cout<< licznik/a<<"/"<<mianownik/b;
    }

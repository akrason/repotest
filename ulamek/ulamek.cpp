/*
 * ulamek.cpp
 * 
 * Copyright 2018  <>
 */


#include <iostream>

using namespace std;

class Ulamek{
private:
    int licznik;
    int mianownik;
public:
    Ulamek (int, int);
    void zapisz(int, int);
    void wypisz() {
        cout << licznik << "/" << mianownik;
    }
    int getl(){
        return licznik;
    }
    int getm(){
        return mianownik;
    }
    void skracaj(){
            cout  << licznik << "/" << mianownik << " = ";
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
};

//void Ulamek::zapisz(int l, int m) {
    //licznik=l;
    //if (m != 0) mianownik = m;
    //else {
        //cout <<"Mianownik nie może być zerem!" <<endl;
        //exit(1);
    //}
//}

Ulamek::Ulamek (int l, int m){
    licznik=l;
    if (m != 0) mianownik = m;
    else {
        cout <<"Mianownik nie może być zerem!" <<endl;
        exit(1);
    }
}

int main(int argc, char **argv)
{
	Ulamek ul1(8,10);
	Ulamek ul2(1,7);
    
    //ul1.zapisz(4,5);
    //ul2.zapisz(1,7);
    cout << "1 ułamek: "; 
    ul1.wypisz();
    cout << endl << "2 ułamek: "; 
    ul2.wypisz();
    cout << endl;
	cout << ul1.getl() << endl;
    cout << ul1.getm() << endl;
    ul1.skracaj();
    
    return 0;
}


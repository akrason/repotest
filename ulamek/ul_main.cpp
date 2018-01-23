/*
 * ul_main.cpp
 * 
 * Copyright 2018  <>
 * 
 */


#include <iostream>
#include "ul_ulamek.h"

using namespace std;

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


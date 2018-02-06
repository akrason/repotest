#include <iostream>
#include "u_uczen.h"

using namespace std;


void Uczen::srednia(){
    int suma = 0;
    
    for (i=0;i<n;i++){
        suma += oceny[i];
    }
    cout<<"Średnia: "<< suma/i;
}

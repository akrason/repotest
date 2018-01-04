/*
 * formatowanie.cpp
 * 
 * Copyright 2018  <>
 * 
 */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{   
    float lf = 12.768;
    int li = 611;
    printf("Liczba Pi: %15.4f\n",M_PI);
    printf("Liczba Lf: %15.4f\n",lf);
    printf("Liczba Li: %+15i\n",li);
    printf("Hex Li: %#x\n",li);
    printf("Oct Li: %#o\n",li);
    
    cout << endl;
    cout.precision(5);
    cout.width(10);
    cout << lf << endl;
    cout << setprecision(3) << setw(20)<< setfill('_') << M_PI << endl;
    cout << setprecision(3) << setw(20)<< left << M_PI << endl;

	cout << hex << li << endl;
	cout << oct << li << endl;
	return 0;
}


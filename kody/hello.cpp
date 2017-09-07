/*
 * hello.cpp
 * 
 * Copyright 2017  <>
 */


#include <iostream>

using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983

void parzyste(int a){
    int c=0;
    cout<<"Liczby parzyste: "<<endl;
    for(int i=0; i<=a; i=i+2){
        cout<<i<<" ";
        c++;
    }
    cout<<"Ilość parzystych: "<<c;
}


int main(int argc, char **argv)
{   
    string imie;
    int wiek,rok,liczba;
	cout<<"Imię?"<<endl;
    cin>>imie;
    cout<<"Witaj "<<imie<<endl<<"Ile masz lat?"<<endl;
    cin>>wiek;
    rok = ROK_TERAZ-wiek;
    cout<<"Urodziłeś się w "<<rok<<" roku.";
    if (rok>ROK_CPP){
        cout<<"Jestem starszy!"<<endl;
        }
    else if (rok<ROK_CPP){
        cout <<"Jestem młodszy"<<endl;
        }
    else {
        cout << "Mamy tyle samo lat!"<<endl;
        }
    cout<<"Z jakiego zakresu wypisać liczby parzyste? "<<endl;
    cin>>liczba;
    parzyste(liczba);
    
	return 0;
}


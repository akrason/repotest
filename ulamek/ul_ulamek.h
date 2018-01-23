#ifndef ULAMEK_H
#define ULAMEK_H

class Ulamek{
private:
    int licznik;
    int mianownik;
public:
    Ulamek (int, int);
    void zapisz(int, int);
    void wypisz();
    int getl();
    int getm();
    void skracaj();
};

#endif

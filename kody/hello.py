#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py
#  
#  Copyright 2017  <>
#  
ROK_TERAZ = 2017
ROK_PY = 1991

def parzyste(n):
    print("Liczby parzyste: ")
    ile = list(range(0, n+1, 2))
    print(ile,"Ilość parzystych: ")
    return len(ile)

def main(args):
    
    imie = input("Imię? ")    
    print("Witaj",imie)
    wiek = int(input("Ile masz lat? "))
    rok=ROK_TERAZ-wiek
    print("Urodziłeś się w ",rok," roku.")
    if (rok>ROK_PY):
        print("Jestem starszy!")
    elif (rok<ROK_PY):
        print("Jestem młodszy!")
    elif (rok==ROK_PY):
        print("Mamy tyle samo lat!")
    n = int(input("Z jakiego zakresu wypisać liczby parzyste? "))
    print(parzyste(n))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

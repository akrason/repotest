#!/usr/bin/env python
# -*- coding: utf-8 -*-


def szyfruj(tekst, klucz):
    szyfrogram = ""
    for i in range(len(tekst)):
        if ord(tekst[i].lower()) + klucz > 122:
            szyfrogram += chr(ord(tekst[i].lower()) + klucz - 26)
        else:
            szyfrogram += chr(ord(tekst[i].lower()) + klucz)
    print szyfrogram


def main(args):
    tekst = raw_input("Podaj tekst: ")
    klucz = int(raw_input("Podaj klucz: "))
    szyfruj(tekst, klucz)
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

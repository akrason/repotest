#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3

def wyniki(dane):
    
    for rekord in dane:
        print(tuple(rekord))


def kw_a(cur):

    cur.execute("""
        SELECT Imie, Nazwisko, Klasa
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND Klasa = '1A'
        
    """)

    wyniki(cur.fetchall())

def kw_b(cur):

    cur.execute("""
        SELECT Imie, Nazwisko, MAX(EgzHum)
        FROM tbUczniowie
    """)

    wyniki(cur.fetchall())

def kw_c(cur):

    cur.execute("""
        SELECT Klasa, AVG(EgzMat)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND Klasa = '1A'
        
    """)

    wyniki(cur.fetchall())

def kw_d(cur):

    cur.execute("""
        SELECT Ocena, Datad
        FROM tbUczniowie, tbOceny
        WHERE tbUczniowie.IDUcznia = tbOceny.UczenID
        AND Imie= 'Dorota' 
        AND Nazwisko = 'Nowak'
        
    """)

    wyniki(cur.fetchall())

def kw_e(cur):

    cur.execute("""
        SELECT AVG(Ocena)
        FROM tbOceny, tbPrzedmioty
        WHERE tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
        AND tbPrzedmioty.Przedmiot = 'fizyka'
        AND Datad > '2012-10-01'
        AND Datad < '2012-10-31'

    """)

    wyniki(cur.fetchall())

def dodaj(cur):

    cur.execute("""
        INSERT INTO tbklasy
        VALUES (?, ?, ?, ?)
    """, [None,'1B',2017,2020])

    wyniki(cur.fetchall())

def update(cur):

    cur.execute("""
        UPDATE tbklasy
        SET klasa = ?
        WHERE klasa = ? and roknaboru=?
    """, ['1D','1B',2017])

    wyniki(cur.fetchall())




def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    con.row_factory = sqlite3.Row
    
    #dodaj(cur)
    update(cur)
    con.commit()
    wyniki(cur.execute('SELECT * FROM tbklasy'))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

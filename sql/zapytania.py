#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3


def kw_d(cur):
    cur.execute("""
        SELECT * FROM pracownicy
    """)

    wyniki = cur.fetchall()
    for rekord in wyniki:
        print(tuple(rekord))

def main(args):
    con = sqlite3.connect('pracownicy.sqlite3')
    cur = con.cursor() #utworzenie kursora
    
    kw_d(cur)
      
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

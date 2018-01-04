#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  formatowanie.py
#  
#  Copyright 2018  <>


def main(args):
    li = 611
    lf=123.234
    print("Liczba: {}".format(li))
    print("Liczba: {:20} | {:10}".format(li,lf))
    print("Liczba: {:<20} | {:<10}".format(li,lf))
    print("Liczba: {:^20} | {:^10}".format(li,lf))
    print("Liczba: {:_^20} | {:*<10}".format(li,lf))
    print("Liczba: {:_^20.2} | {:*<10.3}".format(li,lf))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

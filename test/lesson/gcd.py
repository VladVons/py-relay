#!/usr/bin/env python3

def GetGCD(a, b):
    while (a != 0) and (b != 0):
        if (a > b):
            a = a % b
        else:
            b = b % a
        print('---', a, b)
    return a + b

def GetLCD(a, b):
    gcd = GetGCD(a, b)
    return a / gcd * b;


def Get(a, b):
    print('---', a, b)

    Res = GetGCD(a, b)
    print('gcd', Res)

    print()

    Res = GetLCD(a, b)
    print('lcd', Res)


#Get(64, 12)
#Get(128, 12)
#Get(256, 24)
#Get(124, 12)

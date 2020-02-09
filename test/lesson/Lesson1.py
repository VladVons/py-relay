#!/usr/bin/env python3
# 2020.01.25

import random

MaxLines = 10

def Example1():
    print('Hello Example1')

    #большинство правильных списков
    List11 = ['a', 'b', 'c', 'd']
    List12 = ['a', 'b', 'c', 'd']
    List13 = ['a', 'b', 'c', 'd']
    List14 = ['a', 'b', 'c', 'd']
    List15 = ['a', 'b', 'c', 'd']
    List16 = ['a', 'b', 'c', 'd']

    #добавляем не правильных списков
    List21 = ['c', 'd', 'b', 'a']
    List22 = ['b', 'd', 'a', 'd']
    List23 = ['d', 'b', 'a', 'c']

    #обединяем в единий список
    ListAll= [List11, List12, List13, List14, List15, List16, List21, List22, List23]

    #выполнить цыкл с повторением MaxLines  
    for i in range(MaxLines):
      #получить размер списка
      Max = len(ListAll) - 1

      #получить случайное число  
      Rnd = random.randint(0, Max)

      #получить случайний список 
      List = ListAll[Rnd]

      print(i, Rnd, List)


Example1()

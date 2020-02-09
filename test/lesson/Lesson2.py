#!/usr/bin/env python3
# 2020.01.25

import random

MaxLines = 10

def Example2():
  print('Hello Example2')

  #обявляем список
  List1 = ['a', 'b', 'c', 'd']

  #выполнить цыкл с повторением MaxLines  
  for i in range(MaxLines):

    #получить случайное число  
    Rnd = random.randint(0, 9)

    #проверить число на значение
    if (Rnd < 5):
      #выводим оригинальное содержимое списка List
      print('Original', i, Rnd, List1)

    elif (Rnd < 6):
      #выводим зеркальное содержимое списка List
      List2 = List1.copy()
      List2.reverse()
      print('Reverse ', i, Rnd, List2)

    elif (Rnd < 8):
      #выводим крайне обменное содержимое списка List
      List2 = List1.copy()
      FirstIdx = 0
      LastIdx  = len(List2) - 1

      if (Rnd == 6):
        Tmp = List2[LastIdx]
        List2[LastIdx] = List2[FirstIdx]
        List2[FirstIdx] = Tmp
        print('Swap1   ', i, Rnd, List2)
      else:
        List2[LastIdx], List2[FirstIdx] = List2[FirstIdx], List2[LastIdx] 
        print('Swap2   ', i, Rnd, List2)

    else:
      #выводим перемешанное содержимое списка List
      List2 = List1.copy()
      random.shuffle(List2)
      print('Random  ', i, Rnd, List2)


Example2()

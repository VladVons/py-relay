#!/usr/bin/env python3

import enum
import collections


def Test1():
    Animal = enum.Enum('Animal', 'ant, bee, cat, dog, boy')
    print(Animal, Animal.cat, Animal.cat.value)
    for Name, Member in Animal.__members__.items():
      print(Name, Member)


def Test2():
    @enum.unique
    class Animal(enum.Enum):
        cat = 7
        #boy = 7
    print(Animal, Animal.cat, Animal.cat.value)

def Test3():
    wsi = collections.namedtuple('WorldSideInfo', ['angle', 'mode', 'char'])

    class WorldSide(enum.Enum):
        North       = wsi(90,   (0, 0, 0), 'a1')
        NorthEast   = wsi(45,   (2, 1, 1), 'b2')
        East        = wsi(0,    (0, 0, 0), 'c3')
        SouthEast   = wsi(-45,  (2, 1, 1), 'd4')
        South       = wsi(-90,  (0, 0, 0), 'e5')
        SouthWest   = wsi(-135, (2, 1, 1), 'f6')
        West        = wsi(180,  (0, 0, 0), 'g7')
        NorthWest   = wsi(135,  (2, 1, 1), 'h8')
    print(WorldSide.West.value.angle, WorldSide.West.value.mode, WorldSide.West.value.char)


def Test4():
    class Color(enum.Flag):
      RED       = enum.auto()
      GREEN     = enum.auto()
      BLUE      = enum.auto()
      L1        = enum.auto()
      MAGENTA   = RED | BLUE
      YELLOW    = RED | GREEN
      CYAN      = GREEN | BLUE

    print(Color.RED, Color.RED.value)
    print(Color.GREEN, Color.GREEN.value)
    print(Color.BLUE, Color.BLUE.value)
    print(Color.L1, Color.L1.value)
    print(Color.YELLOW, Color.YELLOW.value)


def Test5():
    class Color(enum.IntFlag):
      One = enum.auto()
      Two = enum.auto()

    print(Color.Two, Color.Two.value)


#Test1()
#Test2()
#Test3()
#Test4()
Test5()


#def x1():
#    print('111')
#x11 = x1

#x11()

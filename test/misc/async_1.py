#!/usr/bin/env python3
# countsync.py

import time
import sys

def count1():
    print("One")
    time.sleep(1)
    print("Two")

def main():
    for _ in range(3):
        count1()

if __name__ == "__main__":
    print(sys.version_info, sys.version_info.major, sys.version_info.minor, sys.version_info.micro)
    s = time.perf_counter()
    main()
    elapsed = time.perf_counter() - s
    print(f"{__file__} executed in {elapsed:0.2f} seconds.")

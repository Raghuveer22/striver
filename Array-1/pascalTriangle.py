import os
import sys
from collections import *
from math import *

def printPascal(n: int):
    def generateRow(row):
        ans = [1]
        temp = 1
        for i in range(0, row):
            temp = temp * (row - i)
            temp = int(temp / (i + 1))
            ans.append(temp)
        return ans

    t = []
    for i in range(n):
        t.append(generateRow(i))
    return t

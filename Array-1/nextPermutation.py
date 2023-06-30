import os
import sys
from collections import *
from math import *

def nextPermutation(permutation, n):
    if n == 1:
        return permutation
    else:
        pivot = -1
        for i in range(n - 2, -1, -1):
            if permutation[i] < permutation[i + 1]:
                pivot = i
                break
        if pivot == -1:
            permutation.reverse()
            return permutation
        else:
            min_v = max(permutation)
            min_i = 0
            for i in range(n):
                if permutation[i] == min_v:
                    min_i = i
            for i in range(pivot + 1, n):
                if permutation[pivot] < permutation[i]:
                    if min_v > permutation[i]:
                        min_v = permutation[i]
                        min_i = i
            permutation[pivot], permutation[min_i] = permutation[min_i], permutation[pivot]
            permutation[pivot + 1:] = sorted(permutation[pivot + 1:])
            return permutation


import os
import sys
from collections import *
from math import *

def pairSum(arr, s):
    arr.sort()
    i = 0
    n = len(arr)
    l=[]
    for i in range(0,n):
        for j in range(i+1,n):
            if arr[i]+arr[j]==s:
                l.append([arr[i],arr[j]])
            if arr[i]+arr[j]>s:
                break
    return l
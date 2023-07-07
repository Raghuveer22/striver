from math import *
from collections import *
import os
import sys
def ninjaAndSortedArrays(arr1,arr2,m,n):
    i=m-1
    j=0
    while(i>=0 and j<=n-1):
        if arr1[i]>arr2[j]:
            arr1[i],arr2[j]=arr2[j],arr1[i]
        i-=1
        j+=1
    arr1[:m]=sorted(arr1[:m])
    arr2.sort()
    arr1[m:]=arr2
    return arr1

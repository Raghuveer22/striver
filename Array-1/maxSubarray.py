import os
import sys
from collections import *
from math import *

from sys import stdin,setrecursionlimit
setrecursionlimit(10**7)

def maxSubarraySum(arr, n) :
    ans=-2**31
    sum_=0
    for x in arr:
        sum_=sum_+x
        ans=max(ans,sum_)
        sum_=max(sum_,0)
    ans=max(ans,0)
    return ans


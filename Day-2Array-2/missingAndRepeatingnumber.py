from math import *
from collections import *
import sys
import os 

def missingAndRepeating(arr, n):
    sn=n*(n+1)
    sn=int(sn/2)
    s=0
    # missing num=y
    # repeating num=x
    for x in arr:
        s+=x
    lin_diff=s-sn
    s2=0
    for x in arr:
        s2+=x*x
    sn2=n*(n+1)*(2*n+1)
    sn2=int(sn2/6)
    sq_diff=s2-sn2
    lin_sum=int(sq_diff/lin_diff)
    ans1=int((lin_diff+lin_sum)/2)
    ans2=int((lin_sum-lin_diff)/2)
    if ans1 in arr:
        ans1,ans2=ans2,ans1
    return ans1,ans2
A=[1,2,3,3,4,6]
missingAndRepeating(A,6)
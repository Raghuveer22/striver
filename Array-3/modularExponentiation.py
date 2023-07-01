from math import *
from collections import *
import os 
import sys
sys.setrecursionlimit(10**7)

def modularExponentiation(x, n, m):
    ans=1
    nn=n
    while nn!=0:
        if ((nn%2)==1):
            ans=ans*(x%m)
            ans=ans%m
        x=(x%m)*(x%m)
        x%=m
        nn=int(nn/2)
    return ans
# Main.
t = int(input())
while (t > 0):
	lst = list(map(int,input().split()))
	x,n,m = lst[0], lst[1], lst[2]
	print(modularExponentiation(x, n, m))
	t -= 1
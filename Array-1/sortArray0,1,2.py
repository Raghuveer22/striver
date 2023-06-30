import sys
import os
from collections import *
from math import *

from sys import stdin,setrecursionlimit
setrecursionlimit(10**7)

def sort012(arr, n) :
    low=0
    mid=0
    high=n-1
    while(mid<=high):
        if arr[mid]==0:
            arr[low],arr[mid]=arr[mid],arr[low]
            mid+=1
            low+=1
        elif arr[mid]==1:
            mid+=1
        elif arr[mid]==2:
            arr[mid],arr[high]=arr[high],arr[mid]
            high-=1
    


#taking inpit using fast I/O
def takeInput() :
	n = int(input().strip())

	if n == 0 :
		return list(), 0

	arr = list(map(int, stdin.readline().strip().split(" ")))

	return arr, n



def printAnswer(arr, n) :
    
    for i in range(n) :
        
        print(arr[i],end=" ")
        
    print()
    
#main

t = int(input().strip())
for i in range(t) :

    arr, n= takeInput()
    sort012(arr, n)
    printAnswer(arr, n)

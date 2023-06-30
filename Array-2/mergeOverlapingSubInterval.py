import os
import sys
from collections import *
from math import *

from sys import stdin,setrecursionlimit

class Solution:
    def __init__ (self, start, end):
        self.start = start
        self.end = end

def mergeIntervals(intervals):
    # Write your code here.
    arr = sorted(intervals, key=lambda x: x.start)
    n=len(arr)
    ans=[]
    if n==1:
        return intervals
    else:
        curr_e=intervals[0].end
        curr_beg=intervals[0].start
        for i in range(1,n):
            if intervals[i].start<=curr_e:
                curr_e=max(intervals[i].end,curr_e)
            else:
                obj=Solution(curr_beg,curr_e)
                ans.append(obj)
                curr_beg=intervals[i].start
                curr_e=intervals[i].end
        obj=Solution(curr_beg,curr_e)
        ans.append(obj)    
    return ans
    
    

n = int(input())
arr1 = list(map(int, stdin.readline().strip().split(" ")))
arr2 = list(map(int, stdin.readline().strip().split(" ")))
arr1.sort()
arr2.sort()
intervals = []
for i in range(n):
    a = Solution(arr1[i], arr2[i])
    intervals.append(a)

res = mergeIntervals(intervals)

for i in range(len(res)):
    print(res[i].start, res[i].end)

import os 
import sys
from collections import *
from math import *

def reversePairs(arr, n):
    def merge(start,mid,end):
        next_index=mid+1
        temp=[]
        i=start
        j=next_index
        while True:
            if(arr[i]<arr[j]):
                temp.append(arr[i])
                i+=1
            else:
                temp.append(arr[j])
                j+=1
            if i==mid+1 or j==end+1:
                break
        while i <= mid:
                temp.append(arr[i])
                i+= 1
        while j <= end:
                temp.append(arr[j])
                j += 1
        for i in range(start, end+1):
            arr[i] = temp[i-start]
                
    def solve(start,mid,end):
        cnt=0
        j=mid+1
        for i in range(start,mid+1):
            while j<=end and arr[i]>2*arr[j]:
                j+=1
            cnt+=j-mid-1
        return cnt
    def mergeSort(start,end):
            cnt=0
            if(start>=end):
                return cnt
            mid=int((start+end)/2)
            cnt+=mergeSort(start,mid)
            cnt+=mergeSort(mid+1,end)
            cnt+=solve(start,mid,end)
            merge(start,mid,end)
            return cnt 
    return mergeSort(0,len(arr)-1)
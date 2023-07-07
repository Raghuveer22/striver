from math import *
from collections import *
import sys
import os
def findMajorityElement(arr, n):
	if(n==1):
		return arr[0]
	cnt=0
	max_cnt=0
	index=0
	for i in range(0,n):
		if(arr[i]==arr[index]):
			cnt+=1
		else:
			cnt-=1
		if(cnt==0):
			cnt=1
			index=i
	for i in range(0,n):
		if arr[i]==arr[index]:
			max_cnt+=1
	if(max_cnt>floor(n/2)):
		return arr[index]
	return -1
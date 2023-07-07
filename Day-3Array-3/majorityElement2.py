from math import *
from collections import *
import os 
import sys

def majorityElementII(arr):
	ele1=-10**6
	ele2=-10**6
	cnt1=0
	cnt2=0
	for x in arr:
		if (cnt1==0 and ele2!=x):
			cnt1=1
			ele1=x
		elif(cnt2==0 and ele1!=x):
			cnt2=1
			ele2=x
		elif(ele1==x):
			cnt1+=1
		elif(ele2==x):
			cnt2+=1
		else:
			cnt1-=1
			cnt2-=1
	max_cnt1=0
	max_cnt2=0
	for x in arr:
		if (x==ele1):
			max_cnt1+=1
		elif(x==ele2):
			max_cnt2+=1
	l=[]

	n=len(arr)
	if(max_cnt1>floor(n/3)):
		l.append(ele1)
	if(max_cnt2>floor(n/3)):
		l.append(ele2)
	return l
import os 
import sys
from collections import *
from math import *

def uniquePaths(m, n):
	dp=[[0 for i in range(0,n)]for i in range(0,m)]
	for i in range(m-1,-1,-1):
		for j in range(n-1,-1,-1):
			if (j==n-1 and i==m-1):
				dp[i][j]=1
			elif(i==m-1):
				dp[i][j]=dp[i][j+1]
			elif(j==n-1):
				dp[i][j]=dp[i+1][j]
			else:
				dp[i][j]=dp[i+1][j]+dp[i][j+1]
	return dp[0][0]

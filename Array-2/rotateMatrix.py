# class Solution:
#     def rotate(self, mat: List[List[int]]) -> None:
#         """
#         Do not return anything, modify mat in-place instead.
#         """
#         mat.reverse()
#         n=len(mat)
#         for i in range(n):
#             for j in range(i+1):
#                 mat[i][j],mat[j][i]=mat[j][i],mat[i][j]
from math import *
from collections import *
from sys import *
from os import *

def rotateMatrix(mat, n, m):
    if m==1 or n==1:
        return
    k=min(m,n)
    for i in range(0,int(k/2)):
        top=i 
        bottom=n-1-i
        left=i
        right=m-1-i
        prev=mat[top][left]
        for j in range (left+1,right+1):
            prev,mat[top][j]=mat[top][j],prev
        # last column
        for j in range (top+1,bottom+1):
            prev,mat[j][right]=mat[j][right],prev
        # last row
        for j in range (right-1,left-1,-1):
            prev,mat[bottom][j]=mat[bottom][j],prev
        # first column
        for j in range (bottom-1,top-1,-1):
            prev,mat[j][left]=mat[j][left],prev
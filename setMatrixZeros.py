class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m=len(matrix)
        n=len(matrix[0])
        if m==1 and n==1:
            return
        if m==1 and n!=1:
            yep=0
            for i in range(0,n):
                if matrix[0][i]==0:
                    yep=1
            if yep==1:
                for i in range(0,n):
                    matrix[0][i]=0
            return None
        if m!=1 and n==1:
            yep=0
            for i in range(0,m):
                if matrix[i][0]==0:
                    yep=1
            if yep==1:
                for i in range(0,m):
                    matrix[i][0]=0
            return None
        col0=matrix[0][0]
        for j in range(1,m):
                if matrix[j][0]==0:
                   col0=0
        for i in range(0,m):
            for j in range(1,n):
                if matrix[i][j]==0:
                    matrix[i][0]=0
        for i in range(1,n):
            for j in range(1,m):
                if matrix[j][i]==0:
                    matrix[0][i]=0
        
        # traversing
        # 1,m and 1,n
        for i in range(1,m):
            for j in range(1,n):
                if matrix[0][j]==0 or matrix[i][0]==0:
                    matrix[i][j]=0
        if matrix[0][0]==0:
            for i in range(1,n):
                matrix[0][i]=0
        if col0==0:
            for j in range(1,m):
                matrix[j][0]=0
        if col0==0 or matrix==0:
            matrix[0][0]=0
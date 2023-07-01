def searchMatrix(mat: [[int]], target: int) -> bool:
    m=len(mat)
    n=len(mat[0])
    high=m*n-1
    low=0
    while(high>=low):
        med=int((high+low)/2)
        rowid=int(med/n)
        columnid=med%n
        if(mat[rowid][columnid])==target:
            return True
        elif(mat[rowid][columnid]>target):
            high=med-1
        else:
            low=med+1
    return False

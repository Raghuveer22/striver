def getSorted(A):
    def merge(start,mid,end):
            next_index=mid+1
            temp=[]
            i=start
            j=next_index
            while True:
                if(A[i]<A[j]):
                    temp.append(A[i])
                    i+=1
                else:
                    temp.append(A[j])
                    j+=1
                if i==mid+1 or j==end+1:
                    break
            while i <= mid:
                    temp.append(A[i])
                    i+= 1
            while j <= end:
                    temp.append(A[j])
                    j += 1
            for i in range(start, end+1):
                A[i] = temp[i-start]
    def mergeSort(start,end):
            if(start>=end):
                return 
            mid=int((start+end)/2)
            mergeSort(start,mid)
            mergeSort(mid+1,end)
            merge(start,mid,end)
            return
    mergeSort(0,len(A)-1)
    
A=[1,2,3,2,3,1]
getSorted(A)
print(A)
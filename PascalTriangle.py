class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        def generateRow(row):
            ans=[1]
            temp=1
            for i in range(0,row):
                temp=temp*(row-i) 
                temp=int(temp/(i+1))
                ans.append(temp)
            return ans
        t=[]
        for i in range(numRows):
            t.append(generateRow(i))
        return t
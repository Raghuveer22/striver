class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        if n==1:
            return 
        else:
            pivot=-1
            for i in range(n-2,-1,-1):
                if nums[i]<nums[i+1]:
                    pivot=i
                    break
            if pivot==-1:
                nums=nums.reverse()
                return 
            else:
                min_v=max(nums)
                for i in range(n):
                    if nums[i]==min_v:
                        min_i=i
                for i in range(pivot+1,n):
                    if(nums[pivot]<nums[i]):
                        if(min_v>nums[i]):
                            min_v=nums[i]
                            min_i=i
                nums[pivot],nums[min_i]=nums[min_i],nums[pivot]
                nums[pivot+1:]= sorted(nums[pivot+1:])
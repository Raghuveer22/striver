class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans=-2**31
        sum_=0
        for x in nums:
            sum_=sum_+x
            ans=max(ans,sum_)
            sum_=max(sum_,0)
        return ans
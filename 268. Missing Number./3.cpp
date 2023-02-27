class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        arrsum=(n*(n+1))//2
        for i in nums:
            arrsum-=i
        return arrsum   

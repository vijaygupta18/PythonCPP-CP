#https://leetcode.com/problems/next-permutation/
class Solution:
    def nextPermutation(self, nums):
        n = len(nums)-1
        while n>0:
            if nums[n-1]<nums[n]:
                break
            n = n-1
        n = n-1
        j = len(nums)-1
        while j>n:
            if nums[j]>nums[n]:
                break
            j=j-1
        nums[n],nums[j]=nums[j],nums[n]  
        nums[n+1:]=sorted(nums[n+1:])

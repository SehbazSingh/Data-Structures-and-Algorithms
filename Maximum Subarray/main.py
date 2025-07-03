# Given an integer array nums, find the subarray with the largest sum, and return its sum.
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int

        """
        csum = 0
        cmax = min(nums)
        for i in nums:
            csum += i
            cmax = max(csum,cmax)
            if csum <0:
                csum =0
        return cmax




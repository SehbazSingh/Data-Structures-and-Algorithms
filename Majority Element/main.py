# The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans = nums[0]
        freq = 0
        for i in nums:
            if freq == 0:
                ans == i

            if ans == i:
                freq += 1
            else:
                freq -= 1
        return ans


# Also if the majority element is the element that appears more than ⌊n / 2⌋ times, if the array is sorted then the middle element will be the majority element
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = sorted(nums)
        return(nums[len(nums)//2])

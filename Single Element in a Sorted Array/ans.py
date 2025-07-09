'''
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
'''
class Solution(object):
    def singleNonDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1:
            return nums[0]
        elif nums[0] != nums [1]:
            return nums[0]
        elif nums[-1] != nums[-2]:
            return nums[-1]
        else:
            start = 1
            end = len(nums)-2
            while start <= end:
                mid = start + (end- start)//2
                if nums[mid] != nums[mid-1] and nums[mid] != nums[mid+1]:
                    return nums[mid]
                elif mid % 2 == 0:
                    if nums[mid-1] == nums[mid]:
                        end = mid - 1
                    else :
                        start = mid + 1 
                else:
                    if nums[mid-1] == nums[mid]:
                        start = mid+1
                    else:
                        end = mid-1
        return -1

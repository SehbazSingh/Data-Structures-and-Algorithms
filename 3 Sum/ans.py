class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        i = 0
        ans = []

        while i < len(nums) - 2:
            
            if i > 0 and nums[i] == nums[i - 1]:
                i += 1
                continue

            j = i + 1
            k = len(nums) - 1

            while j < k:
                sum_val = nums[i] + nums[j] + nums[k]
                if sum_val == 0:
                    ans.append([nums[i], nums[j], nums[k]])
                    j += 1
                    k -= 1
                    while j < k and nums[j] == nums[j - 1]:
                        j += 1
                    while j < k and nums[k] == nums[k + 1]:
                        k -= 1
                elif sum_val < 0:
                    j += 1
                else:
                    k -= 1

            i += 1
        return ans

        


        

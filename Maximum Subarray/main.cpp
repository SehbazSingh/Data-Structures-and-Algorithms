// Given an integer array nums, find the subarray with the largest sum, and return its sum.
//  using kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum = 0, cmax = INT_MIN;
        for (int i : nums){
            csum += i;
            cmax = max(cmax,csum);
            if (csum < 0){
                csum = 0;
            } 
        }
        return cmax;

        
    }
};

// brute force approach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int maxsum = 0;
        for (int i = 0; i < size; ++i) {
            for (int j = i; j < size; ++j) {
                int sum = 0;
                for (int k = i; k <= j; ++k) {
                    sum += nums[k];
                }
                maxsum = max(maxsum, sum);
                
            }
        }
        return maxsum;

        
    }
};

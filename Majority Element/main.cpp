// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// using moore's algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int freq = 0;
        for(int i = 0; i<nums.size(); i++){
            if (freq == 0){
                ans = nums[i];
            }
            if (ans == nums[i]){
                freq ++;
            }else{
                freq--;
            }
        }
        return ans;

    }
};

//  Also if the majority element is the element that appears more than ⌊n / 2⌋ times, if the array is sorted the middle element will be always the majority element.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];z
    }
};

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piviot = nums.size()-2;
        while(piviot >= 0 && nums[piviot] >= nums[piviot+1]){
            piviot --;
        }

        if (piviot >= 0){
            int nextbig = nums.size() -1;
            while (nums[nextbig] <= nums[piviot]){
                nextbig --;
            }
            swap(nums[piviot],nums[nextbig]);
            

        }
        std::reverse(nums.begin() + piviot+1, nums.end());

        
    }
};

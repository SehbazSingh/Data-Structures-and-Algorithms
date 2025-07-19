class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> seen;
        for (int i =0; i < nums.size();i++){
            int diff = target - nums[i];
            if (seen.find(diff) != seen.end()){
                return{seen[diff], i};
            }else{
                seen[nums[i]] = i;
            }

        }
        return {-1,-1};

        
    }
};

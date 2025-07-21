
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i =0;
        vector <vector<int>> ans;
        while (i < nums.size()-2){
            if (i>0 && nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int j =i+1 ;
            int k = nums.size()-1;
            while (j < k){
                int sum_val = nums[i] + nums[j] + nums[k];
                if (sum_val == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j<k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while (j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
                else if( sum_val < 0){
                    j++;
                }else{
                    k--;
                }


            }
            i++;

        }
        return ans;
        
    }

};

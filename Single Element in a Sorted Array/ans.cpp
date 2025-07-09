/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1){
           return nums[0];
        }else if(nums[0] != nums[1]){
            return nums[0];
        }
        else if(nums[nums.size()-1] != nums[nums.size()-2] ){
            return nums[nums.size()-1];
        }else{
            int start = 0, end = nums.size()-1;
            while ( start<= end){
                int mid = start+(end-start)/2;
                if (nums[mid-1]!= nums[mid] && nums[mid+1] != nums[mid] ){
                    return nums[mid];
                }
                if(mid%2 ==0){
                    if(nums[mid -1]== nums[mid]){
                        end = mid-1;
                    }else{
                        start = mid+1;
                    }
                }else{
                    if(nums[mid -1]== nums[mid]){
                        start = mid+1;
                    }else{
                        end = mid-1;
                    }
                    
                }
        

            }
            return -1;
        }
    }

};

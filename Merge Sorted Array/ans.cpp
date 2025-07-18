class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = m-1, n2= n-1, c= n+m-1;
        while (n2 >= 0){
            if (n1 >= 0 && nums1[n1] > nums2[n2]){
                nums1[c] = nums1[n1];
                c--;
                n1--;
            }else{
                nums1[c] = nums2[n2];
                c--;
                n2--;
            }
        }
        
    }
};

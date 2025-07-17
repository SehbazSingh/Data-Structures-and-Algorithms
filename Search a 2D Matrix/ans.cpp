class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int columns = matrix[0].size();
        int rows = matrix.size();
        int trow = 0;

        for (int i = 0 ; i <rows;i++ ){
            if (matrix[i][0] <= target && target <= matrix[i][columns -1]){
                trow = i;
            }
        }
        int start = 0, end = columns -1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            if (matrix[trow][mid] == target){
                return true;
            }
            if (matrix[trow][mid]< target){
                start = mid+1;
            }else{
                end = mid -1 ;
            }
        }
        return false;
        
    }
};

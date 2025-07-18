class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int srow = 0;
        int erow = matrix.size()-1;
        int scolumn = 0;
        int ecolumn = matrix[0].size()-1;
        vector<int> ans;

        while (srow <= erow && scolumn <= ecolumn){
            for (int i = scolumn ; i <= ecolumn;i++ ){
                ans.push_back(matrix[srow][i]);
            }
            srow ++;

            for (int i = srow ; i <= erow;i++ ){
                ans.push_back(matrix[i][ecolumn]);
            }
            ecolumn --;

            if (srow <= erow){
                for (int i = ecolumn ; i >= scolumn;i-- ){
                    ans.push_back(matrix[erow][i]);
                }
                erow --;
            }
            
            if (scolumn <= ecolumn){
                for (int i = erow ; i >= srow;i-- ){
                    ans.push_back(matrix[i][scolumn]);
                }
                scolumn ++;
            }
        }
        return ans;
        
    }
};

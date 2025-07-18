class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        srow = 0
        erow = len(matrix) - 1
        scolumn = 0
        ecolumn = len(matrix[0]) - 1

        ans = []

        while srow <= erow and scolumn <= ecolumn:
            
            for i in range(scolumn, ecolumn + 1):
                ans.append(matrix[srow][i])
            srow += 1

            
            for i in range(srow, erow + 1):
                ans.append(matrix[i][ecolumn])
            ecolumn -= 1

            
            if srow <= erow:
                for i in range(ecolumn, scolumn - 1, -1):
                    ans.append(matrix[erow][i])
                erow -= 1

            
            if scolumn <= ecolumn:
                for i in range(erow, srow - 1, -1):
                    ans.append(matrix[i][scolumn])
                scolumn += 1
        return ans

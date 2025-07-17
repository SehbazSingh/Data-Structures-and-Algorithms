class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        rows = len(matrix)
        columns = len(matrix[0])
        trow = 0
        for i in range (rows):
            if matrix[i][0]<= target and target <= matrix[i][columns-1]:
                trow = i


        start = 0
        end = columns-1
        while start <= end:
            mid = start+(end - start)//2

            if target == matrix[trow][mid]:
                return True
            if matrix[trow][mid] < target:
                start = mid+1
            else:
                end = mid-1
        return False

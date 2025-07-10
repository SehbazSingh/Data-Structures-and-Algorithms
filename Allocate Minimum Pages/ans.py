'''
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:
Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.
'''
class Solution:

    
    
    def findPages(self, arr, k):
        def isvalid(arr, k, maxAllowedPages):
            students = 1
            pages = 0
            for i in range (len(arr)):
                if arr[i] > maxAllowedPages :
                    return 0
                if arr[i]+ pages <= maxAllowedPages:
                    pages += arr[i]
                else:
                    students += 1
                    pages = arr[i]
            
            return students <= k
            
        if k > len(arr):
            return -1
        
        csum = 0
        for i in arr:
            csum = csum + i;
        
        start = 0
        end = csum
        ans = -1
        
        while start <= end:
            mid = start +(end - start)//2
            if (isvalid(arr , k , mid)):
                ans = mid
                end = mid-1
            else:
                start = mid+1
        return ans
        

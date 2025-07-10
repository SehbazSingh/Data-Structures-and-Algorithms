/*
You are given an array arr[] of integers, where each element arr[i] represents the number of pages in the ith book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:
Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.
*/

class Solution {
  public:
  
    bool isvalid(vector <int> &arr , int n, int k, int maxAllowedPages){
        int student = 1, pages = 0;
        for (int i = 0; i< arr.size(); i++){
            if (arr[i] > maxAllowedPages){
                return false;
            }
            if (pages+ arr[i] <= maxAllowedPages){
                pages += arr[i]; 
            } else{
                student ++;
                pages = arr[i];
            }
        }
        return student > k ? false : true ;
    }
    
    
  
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (k > n){
            return -1;
        }
        
        int sum = 0;
        for (int i = 0; i< arr.size(); i++){
            sum += arr[i];
        }
        
        int ans = -1;
        int start = 0 , end = sum;
        while( start <= end ){
            int mid = start + (end - start)/2;
            if(isvalid(arr , n, k, mid)){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;

    }
};

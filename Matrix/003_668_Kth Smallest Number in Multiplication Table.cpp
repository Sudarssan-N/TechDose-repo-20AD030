668. Kth Smallest Number in Multiplication Table
Hard

Nearly everyone has used the Multiplication Table. The multiplication table of size m x n is an integer matrix mat where mat[i][j] == i * j (1-indexed).

Given three integers m, n, and k, return the kth smallest element in the m x n multiplication table.

 

Example 1:

Input: m = 3, n = 3, k = 5
Output: 3
Explanation: The 5th smallest number is 3.

Example 2:

Input: m = 2, n = 3, k = 6
Output: 6
Explanation: The 6th smallest number is 6.

class Solution {
public:
    bool kSmaller(int n, int m, int num, int k) {
        int c = 0;
        for (int i = 1; i <= m; i++)
            c += min(n, num/i);
        
        return c >= k;
    }
    
    int findKthNumber(int m, int n, int k) {
        int lo = 0, hi = m*n, mid, res;
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            
            if (kSmaller(n, m, mid, k)) hi = mid;
            else lo = mid + 1;
        }
        
        return lo;
    }
};
2133. Check if Every Row and Column Contains All Numbers

    User Accepted: 6616
    User Tried: 7638
    Total Accepted: 6777
    Total Submissions: 14630
    Difficulty: Easy

An n x n matrix is valid if every row and every column contains all the integers from 1 to n (inclusive).

Given an n x n integer matrix matrix, return true if the matrix is valid. Otherwise, return false.

 

Example 1:

Input: matrix = [[1,2,3],[3,1,2],[2,3,1]]
Output: true
Explanation: In this case, n = 3, and every row and column contains the numbers 1, 2, and 3.
Hence, we return true.

Example 2:

Input: matrix = [[1,1,1],[1,2,3],[1,2,3]]
Output: false
Explanation: In this case, n = 3, but the first row and the first column do not contain the numbers 2 or 3.
Hence, we return false.


class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            v.clear();
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
                sort(v.begin(), v.end());
            }
            for(int i=0;i<n;i++){
                if(v[i]!=i+1) return false; 
            }
        }
        for(int i=0;i<n;i++){
            v.clear();
            for(int j=0;j<n;j++){
                v.push_back(matrix[j][i]);
                sort(v.begin(), v.end());
            }
            for(int i=0;i<n;i++){
                if(v[i]!=i+1) return false; 
            }
        }
        return true;
    }
};
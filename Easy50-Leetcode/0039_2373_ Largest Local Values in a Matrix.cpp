2373. Largest Local Values in a Matrix

    User Accepted: 9068
    User Tried: 9512
    Total Accepted: 9216
    Total Submissions: 11250
    Difficulty: Easy

You are given an n x n integer matrix grid.

Generate an integer matrix maxLocal of size (n - 2) x (n - 2) such that:

    maxLocal[i][j] is equal to the largest value of the 3 x 3 matrix in grid centered around row i + 1 and column j + 1.

In other words, we want to find the largest value in every contiguous 3 x 3 matrix in grid.

Return the generated matrix.

 

Example 1:

Input: grid = [[9,9,8,1],[5,6,2,6],[8,2,6,4],[6,2,2,2]]
Output: [[9,9],[8,6]]
Explanation: The diagram above shows the original matrix and the generated matrix.
Notice that each value in the generated matrix corresponds to the largest value of a contiguous 3 x 3 matrix in grid.

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(); 
		vector<vector<int>> ans(m-2, vector<int>(n-2)); 
		for (int i = 1; i < m-1; ++i) 
			for (int j = 1; j < n-1; ++j) {
				int cand = 0; 
				for (int ii = i-1; ii <= i+1; ++ii) 
					for (int jj = j-1; jj <= j+1; ++jj) 
						cand = max(cand, grid[ii][jj]); 
				ans[i-1][j-1] = cand; 
			}
		return ans; 
    }
};
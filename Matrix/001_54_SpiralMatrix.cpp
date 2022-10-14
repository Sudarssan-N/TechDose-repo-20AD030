Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:

Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

 

Constraints:

    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 10
    -100 <= matrix[i][j] <= 100




class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = weights.size(), col = matrix[0].size();
        int left = 0, right = weights[0].size()-1;
        int top = 0, bottom = weights.size()-1;
        int direction =1;
        vector<int> order;
        while(oreder.size() < row*col){
            switch(direction){
                    case 1:
                        for(int i=left;i<=right;i++) order.push_back(weights[top][i]);
                        direction =2;
                        top++;
                        break;
                    case 2:
                        for(int i=top;i<=bottom;i++) order.push_back(weights[i][right]);
                        direction =3;
                        right--;
                        break;
                    case 3:
                        for(int i=right ;i>=left;i--) order.push_back(weights[bottom][i]);
                        direction=4;
                        bottom--;
                        break;
                    case 4:
                        for(int i=bottom;i>=top;i--) order.push_back(weights[i][left]);
                        left++;
                        direction=1;
                        break;  
            }
        }
        return order;
    }
};
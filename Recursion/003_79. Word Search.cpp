79. Word Search
Medium
12.4K
497
Companies

Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

Example 1:

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

Example 2:

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true

Example 3:

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false


class Solution {
public:

    vector<vector<bool>> visited;

    bool exist(vector<vector<char>>& board, string word) {
        int rows=board.size();
        int columns = board[0].size();

        for(int i=0;i<rows;i++){
            vector<bool> temp;
            for(int j=0;j<columns;j++){
                temp.push_back(false);
            }
            visited.push_back(temp);
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(word[0]==board[i][j] && searchWord(board, word, i,j, 0)){
                    return true;
                }
            }
        }

        return false;
    }

    bool searchWord(vector<vector<char>>& board, string word,int i, int j, int index){ 

        if(index== word.length()) {
            return true;
        }

        
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || visited[i][j] || board[i][j]!= word[index]){
            return false;
        }
        visited[i][j]=true;

        if(
            searchWord(board, word, i+1,j,index+1)||
            searchWord(board, word, i-1,j,index+1)||
            searchWord(board, word, i,j+1,index+1)||
            searchWord(board, word, i,j-1,index+1)
        ){
            return true;
        }

        visited[i][j] = false;
        return false;
    }
};
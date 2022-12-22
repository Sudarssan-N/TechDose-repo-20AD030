22. Generate Parentheses
Medium
16.3K
633
Companies

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:

Input: n = 1
Output: ["()"]

 

Constraints:

    1 <= n <= 8



class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backTracking(ans,"",0,0, n);
        return ans;
    }

    void backTracking(vector<string>& ans,string str,int open, int close, int max ){
    	if(str.length() == max*2){
			ans.push_back(str);    		
    		return
    	}


    	if(open< max)backTracking(ans, str+"(",open+1, close, max);
    	if(close < open) backTracking(ans, str+")", open, close+1, max);
    }
};
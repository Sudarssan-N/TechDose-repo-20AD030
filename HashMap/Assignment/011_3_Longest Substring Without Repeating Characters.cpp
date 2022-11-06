3. Longest Substring Without Repeating Characters
Medium

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        vector<int> count(128,0) ;
        int start=0, max_int=INT_MIN;
        for(int i=0;i<s.size();i++){
            auto ch = s[i];
            start = max(start, count[ch]);
            max_int = max(max_int, i-start+1);
            count[ch] = i+1;
        }
        return max_int;
    }
};
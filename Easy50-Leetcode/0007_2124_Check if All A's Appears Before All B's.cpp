2124. Check if All A's Appears Before All B's

    User Accepted: 6325
    User Tried: 6513
    Total Accepted: 6540
    Total Submissions: 9181
    Difficulty: Easy

Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.

 

Example 1:

Input: s = "aaabbb"
Output: true
Explanation:
The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
Hence, every 'a' appears before every 'b' and we return true.


class Solution {
public:
    bool checkString(string s) {
        string t = s;
        sort(t.begin(), t.end());
        return s==t;
    }
};

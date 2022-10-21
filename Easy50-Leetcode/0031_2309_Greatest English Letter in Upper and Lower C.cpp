2309. Greatest English Letter in Upper and Lower Case

    User Accepted: 10550
    User Tried: 11415
    Total Accepted: 10745
    Total Submissions: 16427
    Difficulty: Easy

Given a string of English letters s, return the greatest English letter which occurs as both a lowercase and uppercase letter in s. The returned letter should be in uppercase. If no such letter exists, return an empty string.

An English letter b is greater than another letter a if b appears after a in the English alphabet.

 

Example 1:

Input: s = "lEeTcOdE"
Output: "E"
Explanation:
The letter 'E' is the only letter to appear in both lower and upper case.

Example 2:

Input: s = "arRAzFif"
Output: "R"
Explanation:
The letter 'R' is the greatest letter to appear in both lower and upper case.
Note that 'A' and 'F' also appear in both lower and upper case, but 'R' is greater than 'F' or 'A'.


class Solution {
public:
    string greatestLetter(string s) {
        int cnt[128]={0};
        for(auto ch:s){
            ++cnt[ch];
        }
        for(char ch='Z';ch>='A';ch--){
            if(cnt[ch] && cnt[ch+'a'-'A']) return string(1,ch);
        }
        return "";
    }
};
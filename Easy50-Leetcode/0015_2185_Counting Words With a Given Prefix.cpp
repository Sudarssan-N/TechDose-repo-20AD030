2185. Counting Words With a Given Prefix

    User Accepted: 10461
    User Tried: 10792
    Total Accepted: 10790
    Total Submissions: 14232
    Difficulty: Easy

You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.

 

Example 1:

Input: words = ["pay","attention","practice","attend"], pref = "at"
Output: 2
Explanation: The 2 strings that contain "at" as a prefix are: "attention" and "attend"

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = pref.size(), cnt=0;
        for(auto a:words){
            if(pref==a.substr(0,len)) cnt++;
        }
        return cnt;
    }
};
2264. Largest 3-Same-Digit Number in String

    User Accepted: 6642
    User Tried: 7091
    Total Accepted: 7450
    Total Submissions: 13217
    Difficulty: Easy

You are given a string num representing a large integer. An integer is good if it meets the following conditions:

    It is a substring of num with length 3.
    It consists of only one unique digit.

Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

    A substring is a contiguous sequence of characters within a string.
    There may be leading zeroes in num or a good integer.

 

Example 1:

Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".


class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        for(int i=2;i<num.size();i++){
            if(num[i]==num[i-1] && num[i]==num[i-2]){
                string temp = num.substr( i-2,3);
                ans = max(temp, ans);
            }
        }
        return ans;
    }
};
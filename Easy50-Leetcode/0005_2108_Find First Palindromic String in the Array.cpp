Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.

 

Example 1:

Input: words = ["abc","car","ada","racecar","cool"]
Output: "ada"
Explanation: The first string that is palindromic is "ada".
Note that "racecar" is also palindromic, but it is not the first.

Example 2:

Input: words = ["notapalindrome","racecar"]
Output: "racecar"
Explanation: The first and only string that is palindromic is "racecar".


class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto a: words){
            string str="";
            int len = a.size();
            while(len--){
                str+=a[len];
            }
            if(str==a) return a;
        }
        return "";
    }
};
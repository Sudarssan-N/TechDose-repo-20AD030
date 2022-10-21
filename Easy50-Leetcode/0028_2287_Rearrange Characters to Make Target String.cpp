2287. Rearrange Characters to Make Target String

    User Accepted: 9400
    User Tried: 10654
    Total Accepted: 9565
    Total Submissions: 17799
    Difficulty: Easy

You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.

 

Example 1:

Input: s = "ilovecodingonleetcode", target = "code"
Output: 2
Explanation:
For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
We can make at most two copies of "code", so we return 2.

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> tarmp;
        int mn=INT_MAX;
        for(auto i:target){
            tarmp[i]++;
        }
        unordered_map<char, int> smp;
        for(auto i:s) smp[i]++;
        for(auto j:tarmp){
            mn = min(mn, smp[j.first]/j.second);
        }
        return mn;
    }
};
Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

 

Example 1:

Input: s = "foobar", letter = "o"
Output: 33
Explanation:
The percentage of characters in s that equal the letter 'o' is 2 / 6 * 100% = 33% when rounded down, so we retur

class Solution {
public:
    int percentageLetter(string s, char letter) {
        double n=s.size();
        unordered_map<char,int> mp;
        for(auto i:s){
            mp[i]++;
        }
        double l = mp[letter]/n;
        return l*100;
    }
};

int percentageLetter(string s, char letter) {
    return 100 * count(begin(s), end(s), letter) / s.size();
}
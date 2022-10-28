438. Find All Anagrams in a String
Medium

Given two strings s and p, return an array of all the start indices of p s anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int pcount[26], scount[26];
        int m = p.size(), n = s.size();
        memset(pcount,0,sizeof(pcount));
        memset(scount,0,sizeof(scount));
        if(n<   m) return ans;
        for(int i=0;i<m;i++){
            pcount[p[i]-'a']++;
            scount[s[i]-'a']++;
        }
        for(int i=m;i<=n;i++){
        	bool flag = true;
        	for(int j=0;j<26;j++){
        		if(pcount[j]!=scount[j]){
        			flag= false;
        		}
        	}
        	if(flag) ans.push_back(i-m);
        	if(i!=n){
        		scount[s[i-m]-'a']--;
        		scount[s[i]-'a']++;
        	}
        }
        return ans;
    }
};
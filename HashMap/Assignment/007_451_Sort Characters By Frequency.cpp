451. Sort Characters By Frequency
Medium

Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.

Return the sorted string. If there are multiple answers, return any of them.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.


class Solution {
public:
    string frequencySort(string s) {
        string str="";
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
        }
        while(pq.size()){
            char ch = pq.top().second;
            int freq = pq.top().first;
            while(freq--){
                str+=ch;
            }
            pq.pop();
        }
        return str;
    }
};
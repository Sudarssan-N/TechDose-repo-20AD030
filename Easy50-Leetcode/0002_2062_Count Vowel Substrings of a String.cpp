A substring is a contiguous (non-empty) sequence of characters within a string.

A vowel substring is a substring that only consists of vowels ('a', 'e', 'i', 'o', and 'u') and has all five vowels present in it.

Given a string word, return the number of vowel substrings in word.

 

Example 1:

Input: word = "aeiouu"
Output: 2
Explanation: The vowel substrings of word are as follows (underlined):
- "aeiouu"
- "aeiouu"

Example 2:

Input: word = "unicornarihan"
Output: 0
Explanation: Not all 5 vowels are present, so there are no vowel substrings.


class Solution {
public:
    int isvowel(char ch){
        return ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i';
    }
    int countVowelSubstrings(string word) {
        int len = word.size();
        unordered_map<char, int > mp;
        int tot=0;
        for(int i=0;i<len-4;i++){
            mp.clear();
            for(int j=i;j<len && isvowel(word[j]);j++){
                mp[word[j]]++;
                if(mp.size()==5) ++tot;
            }
        }
        return tot;
    }
};
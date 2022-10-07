
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 USE HashMap;

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: false


public Boolean isAnagram(String s, String t){
	HashMap<Character,Integer> hm  = new HashMap<>();
	int n = s.length();
	int m = t.length();
	for(int i=0;i<n;i++){
		char ch = s.charAt(i);
		hm.put(ch, hm.getOrDefault(ch,0)+1);
		//getOrDEfault -> provides the key value else assigns with the default value
	}
	for(int j=0;j<m;j++){
		char ch = t.charAt(j);
		hm.put(ch, hm.getOrDefault(ch,0)-1);
	}
	for(int val: hm.values()){
		if(val!=0) return false;
	}
	return true;
}
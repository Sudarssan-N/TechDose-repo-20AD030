17. Letter Combinations of a Phone Number
Medium
13.5K
786
Companies

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]


class Solution{
public:
	const vector<string> pad = {
		"", "", "abc","def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"
	};

	vector<string> letterCombinations(string digits){
		if(digits.empty())return {};
		vector<string> result;
		result.push_back("");

		for(auto digit: digits){
			vector<string> temp;
			for(auto candidate: pad[digit-'0']){
				for(auto s: result){
					temp.push_back(s+candidate);
				}
			}
			result.swap(temp);
		}
		return result;
	}
}
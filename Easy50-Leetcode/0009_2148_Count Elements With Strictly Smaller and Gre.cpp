2148. Count Elements With Strictly Smaller and Greater Elements

    User Accepted: 8617
    User Tried: 9189
    Total Accepted: 8864
    Total Submissions: 15243
    Difficulty: Easy

Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.

 

Example 1:

Input: nums = [11,7,2,15]
Output: 2
Explanation: The element 7 has the element 2 strictly smaller than it and the element 11 strictly greater than it.
Element 11 has element 7 strictly smaller than it and element 15 strictly greater than it.
In total there are 2 elements having both a strictly smaller and a strictly greater element appear in nums.


class Solution {
public:
    int countElements(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int cnt=0;
        for(auto i: nums){
            if(i>min && i<max){
                cnt++;
            }
        }
        return cnt;
    }
};
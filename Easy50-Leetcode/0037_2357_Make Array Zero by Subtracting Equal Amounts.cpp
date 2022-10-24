2357. Make Array Zero by Subtracting Equal Amounts

    User Accepted: 11544
    User Tried: 12289
    Total Accepted: 12024
    Total Submissions: 18464
    Difficulty: Easy

You are given a non-negative integer array nums. In one operation, you must:

    Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
    Subtract x from every positive element in nums.

Return the minimum number of operations to make every element in nums equal to 0.

 

Example 1:

Input: nums = [1,5,0,3,5]
Output: 3
Explanation:
In the first operation, choose x = 1. Now, nums = [0,4,0,2,4].
In the second operation, choose x = 2. Now, nums = [0,2,0,0,2].
In the third operation, choose x = 2. Now, nums = [0,0,0,0,0].

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        return set<int>(begin(nums), end(nums)).size() - (count(begin(nums), end(nums), 0) > 0);
    }
};	
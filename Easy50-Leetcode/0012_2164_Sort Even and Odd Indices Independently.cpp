2164. Sort Even and Odd Indices Independently

    User Accepted: 8993
    User Tried: 9564
    Total Accepted: 9222
    Total Submissions: 14311
    Difficulty: Easy

You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

    Sort the values at odd indices of nums in non-increasing order.
        For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
    Sort the values at even indices of nums in non-decreasing order.
        For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.

Return the array formed after rearranging the values of nums.

 

Example 1:

Input: nums = [4,1,2,3]
Output: [2,3,4,1]
Explanation: 
First, we sort the values present at odd indices (1 and 3) in non-increasing order.
So, nums changes from [4,1,2,3] to [4,3,2,1].
Next, we sort the values present at even indices (0 and 2) in non-decreasing order.
So, nums changes from [4,1,2,3] to [2,3,4,1].
Thus, the array formed after rearranging the values is [2,3,4,1].


class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        int len = nums.size();
        for(int i=0;i<len;i++){
            if((i)%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        nums.clear();
        int e=0, o=odd.size();
        for(int i=0;i<len;i++){
            if((i)%2==0) nums.push_back(even[e++]);
            else nums.push_back(odd[--o]);
        }
        return nums;
    }
};
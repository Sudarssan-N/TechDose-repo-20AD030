
2248. Intersection of Multiple Arrays

    User Accepted: 8227
    User Tried: 8525
    Total Accepted: 8430
    Total Submissions: 12757
    Difficulty: Easy

Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.

 

Example 1:

Input: nums = [[3,1,2,4,5],[1,2,3,4],[3,4,5,6]]
Output: [3,4]
Explanation: 
The only integers present in each of nums[0] = [3,1,2,4,5], nums[1] = [1,2,3,4], and nums[2] = [3,4,5,6] are 

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> v;
        unordered_map<int, int> mp;
        for(auto i : nums){
            for(auto j:i){
                mp[j]++;
            }
        }
        for(auto it:mp){
            if(it.second==n) v.push_back(it.first);
        }
        sort(v.begin(), v.end());
        return v;
    }
};
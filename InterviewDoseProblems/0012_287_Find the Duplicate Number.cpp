287. Find the Duplicate Number
Medium

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]) return nums[i];
        // }
        // return nums[nums.size()];
        
        // unordered_map<int, int> mp;
        // for(int i:nums) mp[i]++;
        // for(auto i:mp){
        //     if(i.second>1) return i.first;
        // }
        // return -1;
        
        int arr[nums.size()-1];
        for(int i=0;i<nums.size()-1;i++){
            arr[i]={0};
        }
        for(int i=0;i<nums.size();i++){
            arr[nums[i]-1]++;
            if(arr[nums[i]-1]>1) return nums[i];
        }
        return 1;
        
    }
};
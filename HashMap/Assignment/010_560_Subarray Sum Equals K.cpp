560. Subarray Sum Equals K
Medium

Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2

Example 2:

Input: nums = [1,2,3], k = 3
Output: 2


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count=0, sum=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++){\
            sum+=nums[i];
            int target = sum - k;
            if(mp.find(target)!=mp.end()){
                count+=mp[target];
            }
            mp[sum]++;
        }
        return count;
    }
};  
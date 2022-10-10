
209. Minimum Size Subarray Sum
Medium

Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.

Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0, sum=0;
        int res = nums.size()+1;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
            while(sum>=target){
                res = (i-l+1)>res?res:(i-l+1);
                sum-=nums[l];
                l+=1;
            } 
        }
        return (res == nums.size()+1?0:res);
    }
};
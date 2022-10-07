Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:

Input: nums = [1]
Output: 1


class Solution {
    public int maxSubArray(int[] nums) {
        int msf=Integer.MIN_VALUE;
        int meh=0;
        for(int i=0;i<nums.length;i++){
            meh+=nums[i];
            if(meh<nums[i]){
                //left = i;
                meh = nums[i];
            }
            if(meh>msf){
                msf = meh;
                //right = j
            }
        }
        return msf;
    }
}


int main(){
	int msf = INT_MIN;
	int meh=0;
	for(int i=0;i<nums.size()){
		meh+=nums[i];
		if(meh < nums[i]){
			meh = nums[i];
		}
		if(meh>msf){
			msf = meh
		}
	}
	return msf;
}
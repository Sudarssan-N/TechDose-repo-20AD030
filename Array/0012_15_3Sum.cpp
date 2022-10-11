Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<n-2){
        	while(i>0 && i<n-2 && nums[i] ==  nums[i-1]){
        		i++;	
        	}
        	int low = 	i+1, high = n-1;
        	int num = nums[i];
        	while(low<high){
        		while(low<high && low >i+1 && nums[low]==nums[low-1]) low++;
        		while(high>low && high<n-1 && nums[high]==nums[high+1]) high--;
        		if(low<high) {
        			int sum = num+ nums[low]+ nums[high];
        			if(sum==0){
        				ans.push_back({num,nums[low], nums[high]});
        				low++; high--;
        			}
        			else if(sum<0) low++;
        			else high--;
        		}
        	}
        	i++;
        }
        return ans;
    }
};
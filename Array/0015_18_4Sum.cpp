Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

    0 <= a, b, c, d < n
    a, b, c, and d are distinct.
    nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;
        set<vector<int>> ans;
        int len = nums.size();
        if(len<4) return res;
        sort(nums.begin(), nums.end());
        long sum=0;
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left = j+1;
                int right = nums.size()-1;
                while(left<right){
                    sum=(long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target){
                        right-=1; 
                    }
                    else if(sum == target){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        ans.insert(t);
                        left+=1;
                    }
                    else{
                        left+=1;
                    }
                }
            }
        }
        //vector<vector<int>> res;
        for(auto it:ans ){
            res.push_back(it);  
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;
        set<vector<int>> ans;
        int len = nums.size();
        if(len<4) return res;
        sort(nums.begin(), nums.end());
        long sum=0;
        for(int i=0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left = j+1;
                int right = nums.size()-1;
                while(left<right){
                    sum=(long)nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target){
                        right-=1; 
                    }
                    else if(sum == target){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[left]);
                        t.push_back(nums[right]);
                        ans.insert(t);
                        left+=1;
                    }
                    else{
                        left+=1;
                    }
                }
            }
        }
        for(auto it:ans ){
            res.push_back(it);  
        }
        return res;
    }
};
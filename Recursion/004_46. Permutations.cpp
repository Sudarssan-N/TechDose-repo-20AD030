46. Permutations
Medium
14K
237
Companies

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        recursion(nums, 0, result);
        return result;
    }

    void recursion(vector<int>& nums, int index, vector<vector<int>>& ans){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i=index; i<nums.size();i++){
            swap(nums[index], nums[i]);
            recursion(nums, index+1, ans);
            swap(nums[index], nums[i]);
        }
    }
};
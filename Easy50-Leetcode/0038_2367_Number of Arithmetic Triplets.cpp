2367. Number of Arithmetic Triplets

    User Accepted: 11475
    User Tried: 11970
    Total Accepted: 11853
    Total Submissions: 14410
    Difficulty: Easy

You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

    i < j < k,
    nums[j] - nums[i] == diff, and
    nums[k] - nums[j] == diff.

Return the number of unique arithmetic triplets.

 

Example 1:

Input: nums = [0,1,4,6,7,10], diff = 3
Output: 2
Explanation:
(1, 2, 4) is an arithmetic triplet because both 7 - 4 == 3 and 4 - 1 == 3.
(2, 4, 5) is an arithmetic triplet because both 10 - 7 == 3 and 7 - 4 == 3. 


class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        vector<int> hash(305,0); // for storing cnt of each element in the array
        for(int i = 0 ; i < nums.size();i++){
            hash[nums[i]]++; // storing cnt
        }
        int sum = 0;
        for(int i = 0 ; i < nums.size();i++){
             if(hash[nums[i] + diff] > 0 && hash[nums[i] + diff + diff] > 0) 
                 sum++; 
        }
        return sum;
    }
};
2215. Find the Difference of Two Arrays

    User Accepted: 9400
    User Tried: 9851
    Total Accepted: 9597
    Total Submissions: 14280
    Difficulty: Easy

Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

    answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
    answer[1] is a list of all distinct integers in nums2 which are not present in nums1.

Note that the integers in the lists may be returned in any order.

 

Example 1:

Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]
Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nu

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> d;
        set<int> n1 (nums1.begin(), nums1.end()), n2 (nums2.begin(), nums2.end());
        int flag=0;
        for(auto i:n1){
            for(auto j:n2){
                if(i== j){
                    flag=1;
                    break;
                }
            }
            if(flag==0) d.push_back(i);
            flag=0;
        }
        ans.push_back(d);
        d.clear();
        for(auto i:n2){
            for(auto j:n1){
                if(i == j){
                    flag=1;
                    break;
                }
            }
            if(flag==0) d.push_back(i);
            flag=0;
        }
        ans.push_back(d);
        return ans;
    }
};
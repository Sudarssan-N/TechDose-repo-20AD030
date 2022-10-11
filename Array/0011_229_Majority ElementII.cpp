Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]

Example 2:

Input: nums = [1]
Output: [1]


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()<2) return nums;
        const int size = nums.size()/3;
        unordered_map<int, int> mp;
        for(auto &a:nums){
            if(mp.find(a) == mp.end()){
                mp.insert(make_pair(a,1));
            }
            else mp[a]++;
        }
        nums.clear();
        for(auto& it:mp){
            if(it.second > size) {
                //cout<<it.first<<" "<<it.second<<endl;
                nums.push_back(it.first);
            }
        }
        return nums;
    }
};
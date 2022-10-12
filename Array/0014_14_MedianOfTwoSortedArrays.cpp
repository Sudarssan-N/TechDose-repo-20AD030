Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        if(n2<n1) return findMedianSortedArrays(nums2,nums1);
        
        int low=0,high=n1;
        while(low<=high){
            int i=(high+low)/2;
            int j=(n1+n2+1)/2-i;
            
            int Aleft=i==0?INT_MIN:nums1[i-1];
            int Bleft=j==0?INT_MIN:nums2[j-1];
            
            int Aright=i==n1?INT_MAX:nums1[i];
            int Bright=j==n2?INT_MAX:nums2[j];
            
            if(Aleft<=Bright && Bleft<=Aright){
                if((n1+n2)%2==0){
                    return (max(Aleft,Bleft)+min(Aright,Bright))/2.0;
                }else{
                    return max(Aleft,Bleft);
                }
            }else if(Aleft>Bright){
                high=i-1;
            }else{
                low=i+1;
            }
        }
        return 0.0;
    }
};
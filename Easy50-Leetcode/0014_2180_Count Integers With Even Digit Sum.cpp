2180. Count Integers With Even Digit Sum

    User Accepted: 9466
    User Tried: 10215
    Total Accepted: 9681
    Total Submissions: 15498
    Difficulty: Easy

Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.

 

Example 1:

Input: num = 4
Output: 2
Explanation:
The only integers less than or equal to 4 whose digit sums are even are 2 and 4.    

Example 2:

Input: num = 30
Output: 14
Explanation:
The 14 integers less than or equal to 30 whose digit sums are even are
2, 4, 6, 8, 11, 13, 15, 17, 19, 20, 22, 24, 26, and 28.



class Solution {
public:
    int countEven(int nums) {
        if(nums<10) return nums/2;
        int cnt=4, temp=0,sum=0;
        for(int i=11;i<=nums;i++){
            temp=i;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            if(sum%2==0) cnt++;
            sum=0;
        }
        return cnt;
    }
};
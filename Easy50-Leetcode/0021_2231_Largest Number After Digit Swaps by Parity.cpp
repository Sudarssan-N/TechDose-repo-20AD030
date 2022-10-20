2231. Largest Number After Digit Swaps by Parity

    User Accepted: 7694
    User Tried: 8859
    Total Accepted: 7857
    Total Submissions: 16044
    Difficulty: Easy

You are given a positive integer num. You may swap any two digits of num that have the same parity (i.e. both odd digits or both even digits).

Return the largest possible value of num after any number of swaps.

 

Example 1:

Input: num = 1234
Output: 3412
Explanation: Swap the digit 3 with the digit 1, this results in the number 3214.
Swap the digit 2 with the digit 4, this results in the number 3412.
Note that there may be other sequences of swaps but it can be shown that 3412 is the largest possible number.
Also note that we may not swap the digit 4 with the digit 1 since they are of different parities.


class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even;
        priority_queue<int> odd;
        string nums =to_string(num);
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int digit = nums[i]-'0';
            if((digit)%2==0) even.push(digit);
            else odd.push(digit);
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans = ans*10;
            if((nums[i]-'0')%2==0){
                ans+=even.top();
                even.pop();
            }
            else{
                ans+=odd.top();
                odd.pop();
            }
        }
        return ans;
    }
};
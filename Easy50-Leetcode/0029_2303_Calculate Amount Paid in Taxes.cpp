2303. Calculate Amount Paid in Taxes

    User Accepted: 10184
    User Tried: 11071
    Total Accepted: 10401
    Total Submissions: 18275
    Difficulty: Easy

You are given a 0-indexed 2D integer array brackets where brackets[i] = [upperi, percenti] means that the ith tax bracket has an upper bound of upperi and is taxed at a rate of percenti. The brackets are sorted by upper bound (i.e. upperi-1 < upperi for 0 < i < brackets.length).

Tax is calculated as follows:

    The first upper0 dollars earned are taxed at a rate of percent0.
    The next upper1 - upper0 dollars earned are taxed at a rate of percent1.
    The next upper2 - upper1 dollars earned are taxed at a rate of percent2.
    And so on.

You are given an integer income representing the amount of money you earned. Return the amount of money that you have to pay in taxes. Answers within 10-5 of the actual answer will be accepted.

 

Example 1:

Input: brackets = [[3,50],[7,10],[12,25]], income = 10
Output: 2.65000
Explanation:
Based on your income, you have 3 dollars in the 1st tax bracket, 4 dollars in the 2nd tax bracket, and 3 dollars in the 3rd tax bracket.
The tax rate for the three tax brackets is 50%, 10%, and 25%, respectively.
In total, you pay $3 * 50% + $4 * 10% + $3 * 25% = $2.65 in taxes.


class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if(income==0) return 0.0;
        double ans=0.0;
        int prev=0;
        for(int i=0;i<brackets.size();i++){
            int m = min(brackets[i][0], income);
            ans+=((m-prev)*brackets[i][1]*1.0)/100.0;
            if(brackets[i][0]>=income){
                break;
            }
            prev= brackets[i][0];
        }
        return ans;
    }
};
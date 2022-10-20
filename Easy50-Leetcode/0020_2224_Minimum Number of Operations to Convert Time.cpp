2224. Minimum Number of Operations to Convert Time

    User Accepted: 8005
    User Tried: 8782
    Total Accepted: 8246
    Total Submissions: 14696
    Difficulty: Easy

You are given two strings current and correct representing two 24-hour times.

24-hour times are formatted as "HH:MM", where HH is between 00 and 23, and MM is between 00 and 59. The earliest 24-hour time is 00:00, and the latest is 23:59.

In one operation you can increase the time current by 1, 5, 15, or 60 minutes. You can perform this operation any number of times.

Return the minimum number of operations needed to convert current to correct.

 

Example 1:

Input: current = "02:30", correct = "04:35"
Output: 3
Explanation:
We can convert current to correct in 3 operations as follows:
- Add 60 minutes to current. current becomes "03:30".
- Add 60 minutes to current. current becomes "04:30".
- Add 5 minutes to current. current becomes "04:35".
It can be proven that it is not possible to convert current to correct in fewer than 3 operations.

class Solution {
public:
        int toMinute(string curr){
            int mi=0;  
            mi=mi+curr[0]-'0'; mi*=10;
            mi=mi+curr[1]-'0';
            mi*=60;
            int a=0;
            a=a+curr[3]-'0'; a*=10;
            a=a+curr[4]-'0';
            mi+=a;
            return mi;
        }
int convertTime(string curr, string correct) {
  int a=toMinute(curr);
 int b=toMinute(correct);
    int count=0;
    while(a<b){
        if(b-a>=60){
            a+=60;
        }
        else  if(b-a>=15){
            a+=15;
        }
        else  if(b-a>=5){
            a+=5;
        }
        else {
            a+=1;
        }
       count++; 
    }
    return count;
    }
};
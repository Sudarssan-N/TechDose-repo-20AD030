6201. Find The Original Array of Prefix Xor

    User Accepted: 9011
    User Tried: 9446
    Total Accepted: 9174
    Total Submissions: 11147
    Difficulty: Medium

You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

    pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].

Note that ^ denotes the bitwise-xor operation.

It can be proven that the answer is unique.

 

Example 1:

Input: pref = [5,2,0,3,1]
Output: [5,7,2,3,2]
Explanation: From the array [5,7,2,3,2] we have the following:
- pref[0] = 5.
- pref[1] = 5 ^ 7 = 2.
- pref[2] = 5 ^ 7 ^ 2 = 0.
- pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
- pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.


class Solution {
    public int[] findArray(int[] pref) {
        if(pref.length == 1) return pref;
        int result = pref[0];
        int[] res = new int[pref.length];
        res[0] = result;
        for(int i=1;i<pref.length;i++){
            res[i] = result^pref[i];
            result = pref[i];
        }
        return res;
    }
}
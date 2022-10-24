204. Count Primes
Medium

Given an integer n, return the number of prime numbers that are strictly less than n.

 

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:

Input: n = 0
Output: 0

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
            bool* isPrime = new bool[n];
            for(int i = 2; i<n; i++){
                    isPrime[i] = true;
            }
            for(int i =2; i*i<n; i++){
                    if(!isPrime[i]) continue;
                    for(int j = i*i; j<n; j+=i){
                            isPrime[j]= false;
                    }
            }
            for(int i =2; i<n;i++){
                    if(isPrime[i]) count++;
            }
            return count;
    }
};
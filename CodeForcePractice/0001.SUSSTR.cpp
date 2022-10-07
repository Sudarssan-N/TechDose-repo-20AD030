Problem

Alice and Bob are playing a game with a binary string SSS of length NNN and an empty string TTT.
They both take turns and Alice plays first.

    In Alice's turn, she picks the first character of string SSS, appends the character to either the front or back of string TTT and deletes the chosen character from string SSS.
    In Bob's turn, he picks the last character of string SSS, appends the character to either the front or back of string TTT and deletes the chosen character from string SSS.

The game stops when SSS becomes empty.
Alice wants the resultant string TTT to be lexicographically smallest, while Bob wants the resultant string TTT to be lexicographically largest possible.

Find the resultant string TTT, if both of them play optimally.

4
2
10
4
0001
6
010111
10
1110000010


#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int a;
 cin>>a;
 while(a--){
     int m;
     cin>>m;
     string s;
     cin>>s;
     string b="";
     int i=0;
     int j=m-1;
     while(i<=j){
	     if(s[i]=='0'){
	         b=s[i]+b;
	     }else
	     b=b+s[i];
	     if(i<j){
	         if(s[j]=='0')
	         b=b+s[j];
	         else
	         b=s[j]+b;
	         j--;
	     }
	     	i++;
	     }
     cout<<b<<endl;
    }
    return 0;
}
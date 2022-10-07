Problem

Chef initially had two non-empty arrays AAA and BBB, where both arrays contain distinct elements. Moreover, there is no common element in the arrays AAA and BBB.

Chef forms another array CCC from the arrays AAA and BBB using the following process :

    Let XXX denote the leftmost element of array AAA and YYY denote the leftmost element of array BBB.
    If YYY is smaller than XXX, delete YYY from BBB and append it to the end of CCC.
    If XXX is smaller than YYY, delete XXX from AAA and append it to the end of CCC.
    If either array AAA or BBB becomes empty, append all the remaining elements of the other array to the end of CCC.

Chef forgot the arrays AAA and BBB but remembers the array CCC. Find any two valid non-empty arrays AAA and BBB that will yield the given array CCC. If it is not possible, print −1-1−1.

2
6
7 6 3 8 2 9
2
2 1


3
7 6 3
3
8 2 9
-1



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--){
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int max=0;
    	for(int i=0;i<n;i++){
    	    if(a[i]>a[max])
    	    max=i;
    	}
    	if(max==0){
    	    cout<<-1<<endl;
    	}
    	else
    	{
    	    cout<<max<<endl;
    	    for(int i=0;i<max;i++)
    	    cout<<a[i]<<" ";
    	    cout<<endl;
    	    cout<<n-max<<endl;
    	    for(int i=max;i<n;i++)
    	    cout<<a[i]<<" ";
    	    cout<<endl;
    	 }
	}
	return 0;
}

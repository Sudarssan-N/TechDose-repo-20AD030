#include <bits/stdc++.h>
using namespace std;

int _1sCompliment(int N){
   
    return ~N;
}

int _1sComplimentMSB(int N){
    
    for(int i=0; (N>>i) != 0; i++){
        N ^= 1 << i;
    }
    return N;
}

int _2sCompliment(int N){
    return (~N)+1;
}

int main(){
    int N; 
    cin >> N;

   
    cout << _1sCompliment(N) << endl;

    
    cout << _1sComplimentMSB(N) << endl;

  
    cout << _2sCompliment(N) << endl;
    return 0;
}

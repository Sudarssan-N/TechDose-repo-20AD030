#include<stdio.h>
#include<conio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int secondmax=0;
    for(int i=0;i<N;i++){
        if(max<arr[i]){
            secondmax = max;
            max = arr[i];
        }
    }
    printf("%d",secondmax);
}
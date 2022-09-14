#include<stdio.h>
#include<conio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i=5;i>0;i--){
        for(int j=i;j>=0;j--){
            printf("%d",j);
        }
        printf("\n");
    }

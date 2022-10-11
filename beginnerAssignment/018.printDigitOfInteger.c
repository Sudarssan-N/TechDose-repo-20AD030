#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    scanf("%d",&num);
    while (num>0)
    {
        printf("%d\n",num%10);
        num/=10;
    }
    
}
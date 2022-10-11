#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);
    int count[26]={0};
    for(int i=0;i<strlen(str);i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<strlen(str);i++){
        printf("%c %d\n",str[i], count[str[i]-'a']);
    }
}
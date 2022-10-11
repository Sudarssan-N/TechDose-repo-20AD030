#include<stdio.h>
#include<conio.h>

int main(){
    int Row, Col;
    scanf("%d %d",&Row, &Col);
    int arr[Row][Col];
    for(int i=0;i<Row;i++){
        for(int j=0;j<Col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<Col;i++){
        for(int j=0;j<Row;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
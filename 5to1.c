#include<stdio.h>
int main(){
    int rows ;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for (int i = rows; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
// 5 5 5 5 5 
// 4 4 4 4 
// 3 3 3 
// 2 2 
// 1 
    
    return 0 ;
}
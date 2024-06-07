#include <stdio.h>
int main(){
    int col , rows ;

    printf("Enter the number of col = ");
    scanf("%d",&col);

    printf("Enter the number of rows = ");
    scanf("%d",&rows);

    for (int i = 1; i <=rows; i++)
    {
        for (int i = 1; i <=col; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    


    return 0 ;
}
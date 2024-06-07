#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id ;
    int age ;
    char name[20];
    float filed;
} student ;

int main(){

    int n ;
    printf("Enter the number of students = ");
    scanf("%d",&n);

    
    return 0 ;
}
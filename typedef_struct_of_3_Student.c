#include<stdio.h> 
#include<string.h> 
#define LINE printf("\n ---------------------------------------------------- \n"); 
typedef struct Employee
{ 
    int id ; 
    char name[20]; 
    int age ;
    int salary ; 
 
}employee ; 
 
int main() 
{ 
    int a ; 
    typedef int * pointer ; 
    pointer ptr = &a;  
 
    
    employee s1[1]; 
 
    for (int  i = 1; i <=1; i++) 
    { 
        
        printf("\n enter the id : = "); 
        scanf("%d",&s1[i].id); 
        printf("\n enter the name : = "); 
        scanf("%s",&s1[i].name); 
        printf("\n enter the age : = "); 
        scanf("%d",&s1[i].age); 
        printf("\n enter the salary : = "); 
        scanf("%d",&s1[i].salary); 
         
    } 
     
    for (int  i = 1; i <=1; i++) 
    { 
        
        printf("\n id = %d ",s1[i].id); 
        printf("\n name = %s ",s1[i].name); 
        printf("\n age = %d ",s1[i].age); 
        printf("\n age = %d ",s1[i].salary); 
    } 
     
 
    return 0 ; 
}
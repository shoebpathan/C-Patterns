#include<stdio.h> 
#include<string.h> 

#define LINE printf("\n ---------------------------------------------------- \n"); 

typedef struct Student  
{ 
    int id ; 
    char name[20]; 
    int age ; 
} student; 

void outputData(student * ); 
void inputData(student * ); 

int main() 
{ 
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    student students[n]; // Array of structures to hold data for n students
    
    for(int i = 0; i < n; i++) {
        printf("\nInput data for Student %d:\n", i+1);
        inputData(&students[i]);
    }
    
    printf("\nData for all students:\n");
    for(int i = 0; i < n; i++) {
        outputData(&students[i]);
    }

    return 0; 
} 

void outputData(student * ptr ) 
{ 
    LINE 
    printf("\n id = %d , name = %s , age = %d ",ptr->id,ptr->name,ptr->age); 
    LINE 
} 

void inputData(student * ptr ) 
{ 
    LINE 
    printf("\n enter id : "); 
    scanf("%d",&ptr->id); 
    printf("\n enter name: "); 
    scanf("%s",ptr->name); 
    printf("\n enter age : "); 
    scanf("%d",&ptr->age); 
    LINE 
}
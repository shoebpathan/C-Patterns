#include<stdio.h> 
#include<string.h> 

#define LINE printf("\n ---------------------------------------------------- \n"); 

typedef struct Employee  
{ 
    int id ; 
    char name[20]; 
    int age ; 
    float salary;
    char department[20];
} employee; 

void outputData(employee * ); 
void inputData(employee * ); 

int main() 
{ 
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    employee employees[n]; // Array of structures to hold data for n employees
    
    for(int i = 0; i < n; i++) {
        printf("\nInput data for Employee %d:\n", i+1);
        inputData(&employees[i]);
    }
    
    printf("\nData for all employees:\n");
    for(int i = 0; i < n; i++) {
        outputData(&employees[i]);
    }

    return 0; 
} 

void outputData(employee * ptr ) 
{ 
    LINE 
    printf("\n id = %d , name = %s , age = %d , salary = %.2f , department = %s ", ptr->id, ptr->name, ptr->age, ptr->salary, ptr->department); 
    LINE 
} 

void inputData(employee * ptr ) 
{ 
    LINE 
    printf("\n enter id : "); 
    scanf("%d",&ptr->id); 
    printf("\n enter name: "); 
    scanf("%s",ptr->name); 
    printf("\n enter age : "); 
    scanf("%d",&ptr->age); 
    printf("\n enter salary : "); 
    scanf("%f",&ptr->salary); 
    printf("\n enter department : "); 
    scanf("%s",ptr->department); 
    LINE 
}
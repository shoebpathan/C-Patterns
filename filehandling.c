#include<stdio.h>
#include <stdlib.h>

int main(){
    
    char str[20];

    FILE *file = fopen("Data.txt","w");
    if (file != NULL)
    {
        printf("\nThe file is opened...!\n");
        printf("\nEnter the string : = \n");
        scanf("%s",str);
        // fputc('A',file);//prints a single character
        // for (int i = 0; str[i] != '\0'; i++)
        // {
        //     fputc(str[i],file);
        // }




        fputc(str,file);
        printf("\nThe data has beed printed to the file...!\n");
    }
    else
    {
        printf("\nSorry can't open the file...!\n");
        exit(1);
    }
    
    fclose(file);
    printf("\nFile is closed...!\n");


    return 0 ;
}
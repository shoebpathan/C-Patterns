#include <stdio.h>

int main() {
    int rows, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        int num = 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;
        }
        printf("\n");
    }

    return 0;
}

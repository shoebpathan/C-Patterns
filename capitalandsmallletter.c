#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch + i - 1);
        }
        printf("\n");
    }

    return 0;
}

/*

A
B B
c c c 
d d d d
e e e e e

*/
#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}
/*
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/
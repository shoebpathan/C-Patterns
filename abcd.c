#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'a';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

/*a
b c
d e f
g h I j
k l m n o*/
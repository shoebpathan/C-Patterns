#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            if (k % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }

        printf("\n");
    }

    return 0;
}

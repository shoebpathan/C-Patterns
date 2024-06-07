#include <stdio.h>

int main() {
    int n = 9;

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j < n + 1 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Pattern with odd numbers:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", 2 * j - 1);
        }
        printf("\n");
    }

    printf("\nPattern with even numbers:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", 2 * j);
        }
        printf("\n");
    }

    return 0;
}

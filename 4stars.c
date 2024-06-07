#include <stdio.h>

int main() {
    int rows = 6;
    int cols = 10;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i >= 2 && i < 4 && j >= 2 && j < 8) {
                printf("  ");
            } else {
                printf("**"); 
            }
        }
        printf("\n");
    }

    return 0;
}

/*
         
         
      **
      **
         
         
*/
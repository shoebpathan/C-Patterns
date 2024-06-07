#include<stdio.h>

struct Calculator {
    int a;
    int b;
};

int main() {
    struct Calculator calc;
    int ch;

    printf("\n Enter a and b : = ");
    scanf("%d%d", &calc.a, &calc.b);

    printf("\n 1 : Addition ");
    printf("\n 2 : Subtraction ");
    printf("\n 3 : Multiplication ");
    printf("\n 4 : Division ");

    printf("\n Please Enter the Choice : = ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("\n The Result is %d =", calc.a + calc.b);
            break;
        case 2:
            printf("\n The Result is %d - %d = %d ", calc.a, calc.b, calc.a - calc.b);
            break;
        case 3:
            printf("\n The Result is %d * %d = %d ", calc.a, calc.b, calc.a * calc.b);
            break;
        case 4:
            if (calc.b != 0)
                printf("\n The Result is %d / %d = %d ", calc.a, calc.b, calc.a / calc.b);
            else
                printf("\n Cannot divide by zero!");
            break;
        default:
            printf("\n Invalid Choice ...!");
    }

    return 0;
}

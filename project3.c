#include <stdio.h>

int main() {
    double i, j;

    printf("Enter two numbers (i and j): ");
    scanf("%lf %lf", &i, &j);

    printf("i + j = %.2f\n", i + j);
    printf("i - j = %.2f\n", i - j);

    if (j != 0) {
        printf("i / j = %.2f\n", i / j);
    } else {
        printf("i / j = undefined (division by zero)\n");
    }

    return 0;
}







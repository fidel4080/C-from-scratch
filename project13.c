// A program to add all the numbers entered by a user until the user enters zero

#include <stdio.h>
int main(){

    int number, sum = 0;

    do
    {
        printf("Enter a number:");
        scanf("%d", &number);

        sum += number;
    } while (number != 0);

    printf("sum = %d", sum);

    return 0;
    
}
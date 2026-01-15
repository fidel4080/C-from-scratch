//A program to find the factorial of a number, n entered by the user

#include <stdio.h>
int main(){

    int number, factorial = 1;

    printf("Enter a number n to find its factorial:");
    scanf("%d", &number);

    while(number > 0){
        factorial = factorial * number;
        --number;
    }

    printf("The factorial is %d",factorial);

    return 0;
}
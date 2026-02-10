// A function that: -takes 2 numbers
//                  -perfoms multiplication
//                  -returns the result

#include <stdio.h>

int multiply(int a, int b);

int main(){

    int number1, number2 ,product;

    printf("Enter the first number:\n");
    scanf("%d", &number1);

    printf("Enter the second number:\n");
    scanf("%d", &number2);

    product = multiply(number1, number2);

    printf("The product of %d and %d is: %d", number1, number2, product);

    return 0;
}

int multiply(int a, int b){
    return a * b;
}
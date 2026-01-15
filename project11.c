// A program to find the sum of the first n natural numbers, where n is entered by the user

#include <stdio.h>
int main(){
    
    int n, i, sum = 0;

    printf("Enter a number n\n:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        sum += i;
    }

    printf("The sum of first %d numbers is %d", n, sum);

    return 0;
}

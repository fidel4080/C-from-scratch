//A program to find the sum of marks of n number of students using arrays

#include <stdio.h>

int main(){
    int marks [10], i, n, sum = 0;
    printf("Enter the number of students:"); 
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (n <= 0 || n > 10) {
        printf("Number of students must be between 1 and 10\n");
        return 1;
    }

    for (i=0; i < n; ++i){
        printf("Enter the marks of student %d:\n", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Sum = %d", sum);
    return 0;
}
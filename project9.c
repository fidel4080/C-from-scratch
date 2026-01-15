//A program to find the sum of marks of n number of students using arrays

#include <stdio.h>

int main(){
    int marks [10], i;
    int n, sum = 0;
    printf("Enter the number of students:"); 
    scanf("%d", &n);

    for (i=0; i < n; i++){
        printf("Enter the marks of student %d:\n", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];  //sum = sum + mark[i]
    }

    printf("Sum = %d", sum);
    return 0;
}
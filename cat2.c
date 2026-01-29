//A program to read and display elements of an array

#include <stdio.h>

int main(){
    int n, i;

    printf("Enter the number of elements of the array: \n");
    scanf("%d", &n);
    if(n <= 0){
        printf("Array elements can only be more than 0");
        return 1;
    }
    
    int array[n];


    for(i = 0; i < n; ++i){
        printf("Enter element %d:", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are: \n");
    for(i = 0; i < n; ++i){
        printf("%d ", array[i]);
    }

    return 0;
}
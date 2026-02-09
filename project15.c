// Function Parameters

#include <stdio.h>

float square(float x);

int main(){
    float m, n;

    printf("Enter a number to find its square value:\n");
    scanf("%f", &m);

    n = square(m);

    printf("The square of %.2f is: %.2f", m, n);

    return 0;
}

float square(float x){
    float p;
    p = x * x;
    
    return p;
}
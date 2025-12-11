//To check if a number is a vowel or not
#include <stdio.h>

int main(){
    char v; //v = vowel
    printf("Enter a vowel:");
    scanf("%c", &v);

    if(v== 'a'|| v== 'A'|| v== 'b'|| v== 'B'|| v== 'c'|| v== 'C'|| v== 'd'|| v== 'D'|| v== 'e'|| v== 'E'){
         printf("It is a vowel \n");
    }
    else{
        printf("It is not a vowel \n");
    }

    return 0;

}
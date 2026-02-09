// functions in C
//SYNTAX: returnType functionName(){}

#include <stdio.h>

void greet();  //function declaration

int main(){

    printf("Excecute before function call\n");
    greet();
    printf("Excecute after function call");

    return 0;
}

void greet(){
    printf("Good Morning\n"); // function definition
}
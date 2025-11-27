#include <stdio.h>

int main(){
    int student1 = 35;
    int student2 = 10;
    int temp; //A temporary variable for swapping.

    printf("Student 1 before swapping: %d\n",student1);
    printf("Student 2 before swapping: %d\n",student2);

    temp = student1;
    student1 = student2;
    student2 = temp;

    printf("After swapping:....\n");
    printf("Student 1 now is: %d\n", student1);
    printf("Student 2 now is: %d\n", student2);

    return 0;
}
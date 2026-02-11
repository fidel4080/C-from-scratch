#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // Input size of matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[10][10], matrix2[10][10], sum[10][10];

    // Input elements of first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum
    printf("Sum of the two matrices:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", sum[i][j]);  // using \t for spacing
        }
        printf("\n"); // new line after each row
    }

    return 0;
}

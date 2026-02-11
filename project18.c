#include <stdio.h>

int main(){
    int i, j, k, rows1, rows2, cols1, cols2, sum =0;
    int matrix1[10][10], matrix2[10][10], product[10][10];

    printf("Enter number of rows of first matrix: \n");
    scanf("%d", &rows1);

    printf("Enter number of columns of first matrix: \n");
    scanf("%d", &cols1);

    //first matrix elements
    printf("Enter elements of first matrix:\n");
    for(i=0; i < rows1; i++){
        for(j=0; j < cols1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter number of rows of second matrix: \n");
    scanf("%d", &rows2);

    if(cols1 != rows2){
        printf("Number of columns of first matrix must be equal to number of rows of second matrix");
        return 0;
    }

    else{
        printf("Enter number of columns of second matrix: \n");
        scanf("%d", &cols2);
    }

    //second matrix elements
    printf("Enter elements of second matrix:\n");
    for(i=0; i < rows2; i++){
        for(j=0; j < cols2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            for(k = 0; k < cols1; k++){
                sum += matrix1[i][k] * matrix2[k][j];
            }

            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Product of entered matrices\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            printf("%d\t", product[i][j]);
        }

        printf("\n");
    }

    return 0;
}
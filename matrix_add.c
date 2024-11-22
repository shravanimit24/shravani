#include <stdio.h>

int main() {
    int row, col;

    // Accepting the number of rows and columns for the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col], sum[row][col];

    // Accepting elements for the first matrix

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Accepting elements for the second matrix

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the matrices
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
         {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

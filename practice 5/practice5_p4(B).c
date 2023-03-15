/* addmatrix – This function will take four inputs: two 2D arrays, number of rows
and columns (in order) and display the matrix on screen.*/
#include<stdio.h>

//Function to add two matrices
void addMatrix(int rows, int cols, int matrix1[][cols], int matrix2[][cols])
{
    int outputMatrix[rows][cols];
    int i, j;

    printf("The sum of the matrices is: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            outputMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", outputMatrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], i, j;
    printf("Enter the elements of first matrix: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of second matrix: \n");
    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    addMatrix(rows, cols, matrix1, matrix2);

    return 0;
}

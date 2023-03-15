/* printmatrix – This function will take three inputs: 2D array, number of rows
and columns (in order) and display the matrix on screen.*/


#include <stdio.h>

#define MAX_ROWS 50
#define MAX_COLS 50

void printMatrix(int arr[][MAX_COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is: \n");
    printMatrix(arr, rows, cols);

    return 0;
}

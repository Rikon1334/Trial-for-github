/* Write a function printchar(int n) to print n characters. Now modify problem 2
and 3 of Assignment-3 to use printchar function to print half pyramids*/

#include <stdio.h>

void printchar(int n, int direction)
{
    int i, j;
    if(direction == 0)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for(i=n; i>0; i--)
        {
            for(j=0; j<i; j++)
            {
                printf(" ");
            }
            for(j=n; j>=i; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main(void)
{
    int n, direction;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter 0 for left to right and 1 for right to left: ");
    scanf("%d", &direction);
    printchar(n, direction);
    return 0;
}

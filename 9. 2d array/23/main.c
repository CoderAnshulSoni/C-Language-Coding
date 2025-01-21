#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat[100][100];
    int Transpose_Mat[100][100];
    int row, column;

    printf("Enter number of rows of Matrix : ");
    scanf("%d", &row);
    printf("Enter number of columns of Matrix : ");
    scanf("%d", &column);
    printf("Enter Matrix elements : ");

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat[i][j]);
        }
    }
    printf("\nGiven Matrix is : \n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            Transpose_Mat[j][i] = Mat[i][j];
            printf("%d ", Mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTranspose of a given Matrix is : \n");
    for(int i = 0;i < column;i++)
    {
        for(int j = 0;j < row;j++)
        {
            printf("%d ", Transpose_Mat[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for(int i = 0;i < column;i++)
    {
        for(int j = 0;j < row;j++)
        {
            if( Transpose_Mat[i][j] != Mat[i][j] )
            {
                count++;
            }
        }
        printf("\n");
    }
    if(count == 0)
    {
        printf("\nMatrix is a Symmetric Matrix.\n");
    }
    else
    {
        printf("\nMatrix is NOT a Symmetric Matrix.\n");
    }
    return 0;
}

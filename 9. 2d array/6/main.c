#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Mat_A[100][100];
    int Mat_B[100][100];
    int Multiply[100][100];
    int row, column;
    printf("Enter number of rows of Matrix : ");
    scanf("%d", &row);
    printf("Enter number of columns of Matrix : ");
    scanf("%d", &column);

    printf("Enter Matrix A elements : ");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat_A[i][j]);
        }
    }

    printf("Enter Matrix B elements : ");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            scanf("%d", &Mat_B[i][j]);
        }
    }

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            Multiply[i][j] = 0;
            for(int k = 0;k < column;k++)
            {
                Multiply[i][j] += (Mat_A[i][k] * Mat_B[k][j]);
            }
        }
    }

    printf("\nMultiplication of Matrices are :\n\n");
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < column;j++)
        {
            printf("%d ", Multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}
